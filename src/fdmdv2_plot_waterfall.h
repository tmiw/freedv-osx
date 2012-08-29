//==========================================================================
// Name:            fdmdv2_plot_waterfall.h
// Purpose:         Defines a waterfall plot derivative of fdmdv2_plot.
// Created:         June 22, 2012
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
#ifndef __FDMDV2_PLOT_WATERFALL__
#define __FDMDV2_PLOT_WATERFALL__

#include "fdmdv2_plot.h"
#include "fdmdv2_defines.h"

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// Class PlotWaterfall
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
class PlotWaterfall : public PlotPanel
{
public:
    PlotWaterfall(wxFrame* parent);
    ~PlotWaterfall();

protected:
    unsigned    *pixel_buf;
    unsigned    heatmap_lut[256];
    int         greyscale;

    unsigned    heatmap(float val, float min, float max);
    void        draw(wxAutoBufferedPaintDC&  dc);

    void        OnPaint(wxPaintEvent & evt);
    void        OnSize(wxSizeEvent& event);
    void        OnShow(wxShowEvent& event);
    void        paintNow();
    DECLARE_EVENT_TABLE()
};

#endif //__FDMDV2_PLOT_WATERFALL__
