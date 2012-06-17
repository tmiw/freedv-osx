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
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/combobox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/tglbtn.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainDialogBase
///////////////////////////////////////////////////////////////////////////////
class MainDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxComboBox* m_comboRxIn;
		wxStaticText* m_staticText2;
		wxComboBox* m_comboRxOut;
		wxStaticText* m_staticText3;
		wxComboBox* m_comboTxIn;
		wxStaticText* m_staticText4;
		wxComboBox* m_comboTxOut;
		wxStaticText* m_staticText111;
		wxComboBox* m_comboBox111;
		wxStaticText* m_staticText211;
		wxComboBox* m_comboBox211;
		wxStaticText* m_staticText11;
		wxComboBox* m_comboBox11;
		wxStaticText* m_staticText21;
		wxComboBox* m_comboBox21;
		wxToggleButton* m_toggleStartStop;
		wxToggleButton* m_toggleRxTx;
		wxStaticLine* m_staticLine;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnRxInSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRxOutSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTxInSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTxOutSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRadioSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPortSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnToggleStartStop( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnToggleRxRx( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("FDMDV2Basic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 523,526 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~MainDialogBase();
	
};

#endif //__GUI_H__
