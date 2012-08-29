//==========================================================================
// Name:            fdmdv2_defines.h
// Purpose:         Definitions used by plots derived from fdmdv2_plot class.
// Created:         August 27, 2012
// Initial author:  David Witten
// Derived from:    code written by David Rowe
// License:
//
//  Copyright (C) 2012 David Witten
//
//  All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License version 2.1,
//  as published by the Free Software Foundation.  This program is
//  distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
//  License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program; if not, see <http://www.gnu.org/licenses/>.
//
//==========================================================================
#ifndef __FDMDV2_DEFINES__
#define __FDMDV2_DEFINES__

/* FFT points */
#define FDMDV_NSPEC         512

#define MIN_DB              -40.0
#define MAX_DB              0.0
#define BETA                0.1     // constant for time averageing spectrum data
#define MIN_HZ              0
#define MAX_HZ              4000
#define WATERFALL_SECS_Y    5       // number of seconds respresented by y axis of waterfall
#define DT                  0.02    // time between samples
#define FS                  8000    // FDMDV modem sample rate

#define FDMDV_BITS_PER_FRAME          28  /* 20ms frames, 1400 bit/s                                        */
#define FDMDV_NOM_SAMPLES_PER_FRAME  160  /* modulator output samples/frame and nominal demod samples/frame */
                                          /* at 8000 Hz sample rate                                         */
#define FDMDV_MAX_SAMPLES_PER_FRAME  200  /* max demod samples/frame, use this to allocate storage          */
#define FDMDV_SCALE                 1000  /* suggested scaling for 16 bit shorts                            */
#define FDMDV_NSYM                    15

#define MIN_DB              -40.0
#define MAX_DB              0.0
#define BETA                0.1  // constant for time averageing spectrum data
#define MIN_HZ              0
#define MAX_HZ              4000
#define WATERFALL_SECS_Y    5    // number of seconds respresented by y axis of waterfall
#define DT                  0.02 // time between samples
#define FS                  8000    // FDMDV modem sample rate

#define SCATTER_MEM         (FDMDV_NSYM)*50
#define SCATTER_X_MAX       3.0
#define SCATTER_Y_MAX       3.0

// main window params
#define W                   1200
#define W3                  (W/3)
#define H                   600
#define H2                  (H/2)
#define SP                  20

// sound card
#define SAMPLE_RATE         48000                          // 48 kHz sampling rate rec. as we can trust accuracy of sound card
#define N8                  FDMDV_NOM_SAMPLES_PER_FRAME    // processing buffer size at 8 kHz
#define MEM8                (FDMDV_OS_TAPS/FDMDV_OS)
#define N48                 (N8*FDMDV_OS)                  // processing buffer size at 48 kHz
#define NUM_CHANNELS        2                              // I think most sound cards prefer stereo we will convert to mono

#define BITS_PER_CODEC_FRAME (2*FDMDV_BITS_PER_FRAME)
#define BYTES_PER_CODEC_FRAME (BITS_PER_CODEC_FRAME/8)

/* 8 to 48 kHz sample rate conversion */
#define FDMDV_OS                 6         /* oversampling rate           */
#define FDMDV_OS_TAPS           48         /* number of OS filter taps    */

enum
{
    ID_ROTATE_LEFT = wxID_HIGHEST + 1,
    ID_ROTATE_RIGHT,
    ID_RESIZE,
    ID_PAINT_BG
};

#endif  //__FDMDV2_DEFINES__