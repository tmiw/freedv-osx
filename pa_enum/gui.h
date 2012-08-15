///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 17 2012)
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
#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
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

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel1;
		wxNotebook* m_notebook1;
		wxPanel* m_panelRx;
		wxListCtrl* m_listCtrlRxInDevices;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textCtrlRxIn;
		wxStaticText* m_staticText6;
		wxComboBox* m_cbSampleRateRxIn;
		wxListCtrl* m_listCtrlRxOutDevices;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textRxOut;
		wxStaticText* m_staticText10;
		wxComboBox* m_cbSampleRateRxOut;
		wxPanel* m_panelTx;
		wxListCtrl* m_listCtrlTxInDevices;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textCtrlTxIn;
		wxStaticText* m_staticText11;
		wxComboBox* m_cbSampleRateTxIn;
		wxListCtrl* m_listCtrlTxOutDevices;
		wxStaticText* m_staticText81;
		wxTextCtrl* m_textCtrTxOut;
		wxStaticText* m_staticText71;
		wxComboBox* m_cbSampleRateTxOut;
		wxPanel* m_panelAPI;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textStringVer;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textIntVer;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCDevCount;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textAPICount;
		wxButton* m_btnRefresh;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Apply;
		wxButton* m_sdbSizer1Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnActivateApp( wxActivateEvent& event ) { event.Skip(); }
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnRxInDeviceSelect( wxListEvent& event ) { event.Skip(); }
		virtual void OnRxOutDeviceSelect( wxListEvent& event ) { event.Skip(); }
		virtual void OnTxInDeviceSelect( wxListEvent& event ) { event.Skip(); }
		virtual void OnTxOutDeviceSelect( wxListEvent& event ) { event.Skip(); }
		virtual void OnRefreshClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnApplyAudioParameters( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelAudioParameters( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOkAudioParameters( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("PortAudio Device Enumeration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 790,400 ), long style = wxCLOSE_BOX|wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~MainFrameBase();
	
};

#endif //__GUI_H__
