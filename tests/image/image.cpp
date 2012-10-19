///////////////////////////////////////////////////////////////////////////////
// Name:        samples/image/image.cpp
// Purpose:     sample showing operations with wxImage
// Author:      Robert Roebling
// Modified by: Francesco Montorsi
// Created:     1998
// RCS-ID:      $Id$
// Copyright:   (c) 1998-2005 Robert Roebling
//              (c) 2005-2009 Vadim Zeitlin
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////


#include "wx/wx.h"
#include "wx/image.h"
#include "wx/file.h"
#include "wx/filename.h"
#include "wx/graphics.h"
#include "wx/mstream.h"
#include "wx/wfstream.h"
#include "wx/quantize.h"
#include "wx/scopedptr.h"
#include "wx/stopwatch.h"
#include "wx/versioninfo.h"
#include "wx/rawbmp.h"


//-----------------------------------------------------------------------------
// MyApp
//-----------------------------------------------------------------------------

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

class MyRawBitmapFrame : public wxFrame
{
public:
    enum
    {
        BORDER = 15,
        SIZE = 150,
        REAL_SIZE = SIZE - 2*BORDER
    };

    /*
    MyRawBitmapFrame(wxFrame *parent)
        : wxFrame(parent, wxID_ANY, wxT("Raw bitmaps (how exciting)")),
        m_bitmap(SIZE, SIZE, 24),
        m_alphaBitmap(SIZE, SIZE, 32)
    */

    MyRawBitmapFrame(): wxFrame( (wxFrame *)NULL, wxID_ANY, wxT("wxImage sample"),
				wxPoint(20, 20), wxSize(950, 700) ),
		       m_bitmap(SIZE, SIZE, 24)
    {
        SetClientSize(SIZE, SIZE*2+25);

        InitBitmap();

    }

    void InitBitmap()
    {
        // draw some colourful stripes without alpha
        wxNativePixelData data(m_bitmap);
        if ( !data )
        {
            wxLogError(wxT("Failed to gain raw access to bitmap data"));
            return;
        }

        wxNativePixelData::Iterator p(data);
        for ( int y = 0; y < SIZE; ++y )
        {
            wxNativePixelData::Iterator rowStart = p;

            int r = y < SIZE/3 ? 255 : 0,
                g = (SIZE/3 <= y) && (y < 2*(SIZE/3)) ? 255 : 0,
                b = 2*(SIZE/3) <= y ? 255 : 0;

            for ( int x = 0; x < SIZE; ++x )
            {
                p.Red() = r;
                p.Green() = g;
                p.Blue() = b;
                ++p; // same as p.OffsetX(1)
            }

            p = rowStart;
            p.OffsetY(data, 1);
        }
    }

    void OnPaint(wxPaintEvent& WXUNUSED(event))
    {
        wxPaintDC dc( this );
        dc.DrawText(wxT("This is alpha and raw bitmap test"), 0, BORDER);
        dc.DrawText(wxT("This is alpha and raw bitmap test"), 0, SIZE/2 - BORDER);
        dc.DrawText(wxT("This is alpha and raw bitmap test"), 0, SIZE - 2*BORDER);

        dc.DrawText(wxT("Raw bitmap access without alpha"), 0, SIZE+5);
        dc.DrawBitmap( m_bitmap, 0, SIZE+5+dc.GetCharHeight());
    }

private:
    wxBitmap m_bitmap;

    DECLARE_EVENT_TABLE()
};


//-----------------------------------------------------------------------------
// MyRawBitmapFrame
//-----------------------------------------------------------------------------


BEGIN_EVENT_TABLE(MyRawBitmapFrame, wxFrame)
    EVT_PAINT(MyRawBitmapFrame::OnPaint)
END_EVENT_TABLE()


//-----------------------------------------------------------------------------
// MyApp
//-----------------------------------------------------------------------------

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;

    wxInitAllImageHandlers();

    wxFrame *frame = new MyRawBitmapFrame();
    frame->Show( true );

    return true;
}
