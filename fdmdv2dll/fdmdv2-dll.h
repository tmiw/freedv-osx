/*---------------------------------------------------------------------------*\
                                                                             
  FILE........: fdmdv.h
  AUTHOR......: David Rowe
  DATE CREATED: April 14 2012
  MODIFIED....: David Witten  
  ............: 21 May 2011                                                     
                                                                             
  A 1400 bit/s Frequency Division Multiplexed Digital Voice (FDMDV)
  modem.  Used for digital audio over HF SSB. See README_fdmdv.txt for
  more information, and fdmdv_demo.c, fdmdv_mod.c and fdmdv_demod.c
  for example usage.
                     
  Wrapper header for the Codec2 codec and fdmdv modem APIs.

  References:
 
    [1] http://n1su.com/fdmdv/FDMDV_Docs_Rel_1_4b.pdf

\*---------------------------------------------------------------------------*/

/*
  Copyright (C) 2012 David Rowe

  All rights reserved.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License version 2.1, as
  published by the Free Software Foundation.  This program is
  distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program; if not, see <http://www.gnu.org/licenses/>.
*/

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the WIN32PROJECT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// WIN32PROJECT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WIN32PROJECT_EXPORTS
#define WIN32PROJECT_API __declspec(dllexport)
#else
#define WIN32PROJECT_API __declspec(dllimport)
#endif

// This class is exported from the win32-project.dll
class WIN32PROJECT_API Cwin32project 
{
public:
    Cwin32project(void);
    // TODO: add your methods here.
};

extern WIN32PROJECT_API int nwin32project;

WIN32PROJECT_API int fnwin32project(void);

#ifndef __FDMDV__
#define __FDMDV__

#ifdef __cplusplus
extern "C" {
#endif

#include "comp.h"

#define FDMDV_BITS_PER_FRAME          28  /* 20ms frames, 1400 bit/s                                        */
#define FDMDV_NOM_SAMPLES_PER_FRAME  160  /* modulator output samples/frame and nominal demod samples/frame */
                                          /* at 8000 Hz sample rate                                         */
#define FDMDV_MAX_SAMPLES_PER_FRAME  200  /* max demod samples/frame, use this to allocate storage          */
#define FDMDV_SCALE                 1000  /* suggested scaling for 16 bit shorts                            */
#define FDMDV_NSYM                    15

/* 8 to 48 kHz sample rate conversion */

#define FDMDV_OS                 6         /* oversampling rate           */
#define FDMDV_OS_TAPS           48         /* number of OS filter taps    */

/* FDMDV states and stats structures */

struct FDMDV;
    
struct FDMDV_STATS {
    float  snr_est;                /* estimated SNR of rx signal in dB (3 kHz noise BW)  */
    COMP   rx_symbols[FDMDV_NSYM]; /* latest received symbols, for scatter plot          */ 
    int    fest_coarse_fine;       /* freq est state, 0-coarse 1-fine                    */ 
    float  foff;                   /* estimated freq offset in Hz                        */       
    float  rx_timing;              /* estimated optimum timing offset in samples         */
    float  clock_offset;           /* Estimated tx/rx sample clock offset in ppm         */
};

WIN32PROJECT_API struct FDMDV *fdmdv_create(void);
WIN32PROJECT_API void fdmdv_destroy(struct FDMDV *fdmdv_state);
    
WIN32PROJECT_API void fdmdv_mod(struct FDMDV *fdmdv_state, COMP tx_fdm[], int tx_bits[], int *sync_bit);
WIN32PROJECT_API void fdmdv_demod(struct FDMDV *fdmdv_state, int rx_bits[], int *sync_bit, float rx_fdm[], int *nin);
    
WIN32PROJECT_API void fdmdv_get_test_bits(struct FDMDV *fdmdv_state, int tx_bits[]);
WIN32PROJECT_API void fdmdv_put_test_bits(struct FDMDV *f, int *sync, int *bit_errors, int *ntest_bits, int rx_bits[]);
    
WIN32PROJECT_API void fdmdv_get_demod_stats(struct FDMDV *fdmdv_state, struct FDMDV_STATS *fdmdv_stats);
WIN32PROJECT_API void fdmdv_get_waterfall_line(struct FDMDV *fdmdv_state, float magnitudes[], int *magnitude_points);

#endif

#ifdef __cplusplus
}
#endif
