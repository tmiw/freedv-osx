///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 10 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////
#define ID_AUDIO_OPTIONS 1000

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame
{
    private:

    protected:
        wxMenuBar* m_menuBar;
        wxMenu* m_menuFile;
        wxMenu* tools;
        wxPanel* m_panel1;
        wxStatusBar* m_statusBar;

        // Virtual event handlers, overide them in your derived class
        virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
        virtual void OnExitClick( wxCommandEvent& event ) { event.Skip(); }
        virtual void OnAudioOptsDialog( wxCommandEvent& event ) { event.Skip(); }

    public:
        MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("PortAudio Device Enumeration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 690,400 ), long style = wxCLOSE_BOX|wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
       ~MainFrameBase();
};

#endif //__GUI_H__
