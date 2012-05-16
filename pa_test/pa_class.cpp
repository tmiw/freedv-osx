#include "pa_class.h"

PortAudioWrap::PortAudioWrap()
{
    stream = NULL;
//    inputBuffer = 0;
//    outputBuffer = NULL;
    inputDevice = paNoDevice;
    outputDevice = paNoDevice;
    userData = NULL;
    samplerate = 0;
    framesPerBuffer = 0;
    statusFlags = 0;
    streamCallback = NULL;
    streamFinishedCallback = NULL;
    timeInfo = 0;
}

PortAudioWrap::~PortAudioWrap()
{
}

PaError PortAudioWrap::init()
{
    return Pa_Initialize();
}

PaError PortAudioWrap::streamOpen()
{
    return Pa_OpenStream(
                            &stream,
                            &inputBuffer,
                            &outputBuffer,
                            samplerate,
                            framesPerBuffer,
                            statusFlags,
                            *streamCallback,
                            userData
                        );
}

PaError PortAudioWrap::streamStart()
{
    return Pa_StartStream(this->stream);
}

PaError PortAudioWrap::streamClose()
{
    if (isOpen())
    {
        return Pa_CloseStream(this->stream);
    }
    else
    {
        return 1;
    }
}

void PortAudioWrap::terminate()
{
    Pa_Terminate();
}

void PortAudioWrap::stop()
{
    Pa_StopStream(stream);
}

void PortAudioWrap::abort()
{
    Pa_AbortStream(stream);
}

bool PortAudioWrap::isStopped() const
{
    PaError ret = Pa_IsStreamStopped(stream);
    return ret;
}

bool PortAudioWrap::isActive() const
{
    PaError ret = Pa_IsStreamActive(stream);
    return ret;
}

bool PortAudioWrap::isOpen() const
{
    return (stream != NULL);
}

PaDeviceIndex PortAudioWrap::getDefaultInputDevice()
{
    return Pa_GetDefaultInputDevice();
}

PaDeviceIndex PortAudioWrap::getDefaultOutputDevice()
{
    return Pa_GetDefaultOutputDevice();
}

PaError PortAudioWrap::setInputChannelCount(int count)
{
    if(!isActive())
    {
        inputBuffer.channelCount = count;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setInputSampleFormat(PaSampleFormat format)
{
    if(!isActive())
    {
        inputBuffer.sampleFormat = format;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setInputLatency(PaTime latency)
{
    if(!isActive())
    {
        inputBuffer.suggestedLatency = latency;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

void PortAudioWrap::setInputHostApiStreamInfo(void *info)
{
    inputBuffer.hostApiSpecificStreamInfo = info;
}

PaTime  PortAudioWrap::getInputDefaultLowLatency()
{
    return Pa_GetDeviceInfo(inputBuffer.device)->defaultLowInputLatency;
}

PaError PortAudioWrap::setOutputChannelCount(int count)
{
    if(!isActive())
    {
        outputBuffer.channelCount = count;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setOutputSampleFormat(PaSampleFormat format)
{
    if(!isActive())
    {
        outputBuffer.sampleFormat = format;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setOutputLatency(PaTime latency)
{
    if(!isOpen())
    {
        outputBuffer.suggestedLatency = latency;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

void PortAudioWrap::setOutputHostApiStreamInfo(void *info)
{
    outputBuffer.hostApiSpecificStreamInfo = info;
}

PaTime  PortAudioWrap::getOutputDefaultLowLatency()
{
    return Pa_GetDeviceInfo(inputBuffer.device)->defaultLowInputLatency;
}

PaError PortAudioWrap::setFramesPerBuffer(unsigned long size)
{
    if(!isOpen())
    {
        framesPerBuffer = size;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setSampleRate(unsigned long rate)
{
    if(!isOpen())
    {
        samplerate = rate;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setStreamFlags(PaStreamFlags flags)
{
    if(!isOpen())
    {
        statusFlags = flags;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setInputDevice(PaDeviceIndex flags)
{
    if(!isOpen())
    {
        inputDevice = flags;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setOutputDevice(PaDeviceIndex flags)
{
    if(!isOpen())
    {
        outputDevice = flags;
        return paNoError;
    }
    return paStreamIsNotStopped;
}

PaError PortAudioWrap::setCallback(PaStreamCallback *callback)
{
    if(!isOpen())
    {
        streamCallback = callback;
        return paNoError;
    }
    return paStreamIsNotStopped;
}



// Non-linear amplifier with soft distortion curve.
float CubicAmplifier(float input)
{
    float output, temp;
    if(input < 0.0)
    {
        temp = input + 1.0f;
        output = (temp * temp * temp) - 1.0f;
    }
    else
    {
        temp = input - 1.0f;
        output = (temp * temp * temp) + 1.0f;
    }
    return output;
}

#define FUZZ(x) CubicAmplifier(CubicAmplifier(CubicAmplifier(CubicAmplifier(x))))

static int gNumNoInputs = 0;

static int fuzzCallback(const void *inputBuffer,
                        void *outputBuffer,
                        unsigned long framesPerBuffer,
                        const PaStreamCallbackTimeInfo* timeInfo,
                        PaStreamCallbackFlags statusFlags,
                        void *userData)
{
    SAMPLE *out = (SAMPLE*)outputBuffer;
    const SAMPLE *in = (const SAMPLE*)inputBuffer;
    unsigned int i;
    (void) timeInfo;                        // Prevent unused variable warnings.
    (void) statusFlags;
    (void) userData;

    if(inputBuffer == NULL)
    {
        for(i = 0; i < framesPerBuffer; i++)
        {
            *out++ = 0;                     // left - silent
            *out++ = 0;                     // right - silent
        }
        gNumNoInputs += 1;
    }
    else
    {
        for(i = 0; i < framesPerBuffer; i++)
        {
            *out++ = FUZZ(*in++);           // left - distorted
            *out++ = *in++;                 // right - clean
        }
    }
    return paContinue;
}


#if 1
int main(void)
{
    PaError err;
    PaDeviceIndex inputDevice;
    PaDeviceIndex outputDevice;

    PortAudioWrap pa = PortAudioWrap();
    err = pa.init();

    inputDevice = pa.getDefaultInputDevice();        // default input device
    if(inputDevice == paNoDevice)
    {
        fprintf(stderr, "Error: No default input device.\n");
        goto error;
    }
    err = pa.setInputDevice(inputDevice);
    err = pa.setInputChannelCount(2);                           // stereo input
    err = pa.setInputSampleFormat(PA_SAMPLE_TYPE);
    err = pa.setInputLatency(pa.getInputDefaultLowLatency());
    pa.setInputHostApiStreamInfo(NULL);

    outputDevice = pa.getDefaultOutputDevice();      // default output device
    if (outputDevice == paNoDevice)
    {
        fprintf(stderr,"Error: No default output device.\n");
        goto error;
    }
    err = pa.setOutputDevice(inputDevice);
    err = pa.setOutputChannelCount(2);                           // stereo input
    err = pa.setOutputSampleFormat(PA_SAMPLE_TYPE);
    err = pa.setOutputLatency(pa.getOutputDefaultLowLatency());
    pa.setOutputHostApiStreamInfo(NULL);

    err = pa.setFramesPerBuffer(FRAMES_PER_BUFFER);
    err = pa.setSampleRate(SAMPLE_RATE);
    err = pa.setStreamFlags(0);
    err = pa.setCallback(fuzzCallback);
    err = pa.streamOpen();

    if(err != paNoError)
    {
        goto error;
    }
    err = pa.streamStart();
    if(err != paNoError)
    {
        goto error;
    }

    printf("Hit ENTER to stop program.\n");
    getchar();
    err = pa.streamClose();
    if( err != paNoError )
    {
        goto error;
    }
    printf("Finished. gNumNoInputs = %d\n", gNumNoInputs );
    pa.terminate();
    return 0;

error:
    Pa_Terminate();
    fprintf( stderr, "An error occured while using the portaudio stream\n" );
    fprintf( stderr, "Error number: %d\n", err );
    fprintf( stderr, "Error message: %s\n", Pa_GetErrorText( err ) );
    return -1;

}

#endif

