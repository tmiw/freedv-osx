//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WXCRAFTER_BASE_CLASSES_H
#define WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/dialog.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/radiobox.h>
#include <wx/button.h>
#include <wx/slider.h>
#include <wx/radiobut.h>
#include <wx/textctrl.h>

class MainFrameBaseClass : public wxFrame
{
protected:
    wxPanel* m_mainPanel;
    wxMenuBar* m_menuBar;
    wxMenu* m_mbFile;
    wxMenuItem* m_mbiNew;
    wxMenuItem* m_mbiOpen;
    wxMenuItem* m_mbiSave;
    wxMenuItem* m_mbiSaveAs;
    wxMenuItem* m_menuItem21;
    wxMenuItem* m_mbiExit;
    wxMenu* m_mbTools;
    wxMenuItem* m_mbiPrefs;
    wxMenu* m_mbHelp;
    wxMenuItem* m_menuItem9;
    wxToolBar* m_mainToolbar;

protected:
    virtual void OnSize(wxSizeEvent& event) { event.Skip(); }
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnToolsPrefs(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNew(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOpen(wxCommandEvent& event) { event.Skip(); }

public:
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("topFrame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxCLOSE_BOX);
    virtual ~MainFrameBaseClass();
};


class DlgRigCtrlBase : public wxDialog
{
protected:
    wxNotebook* m_notebook53;
    wxPanel* m_panelHDWPTT;
    wxCheckBox* m_checkBox7537;
    wxCheckBox* m_checkBox9112;
    wxStaticText* m_staticText173;
    wxComboBox* m_comboBox9313;
    wxRadioBox* m_radioBox10115;
    wxRadioBox* m_radioBox10316;
    wxButton* m_button11319;
    wxStaticText* m_staticText177;
    wxSlider* m_slider10721;
    wxStaticText* m_staticText179;
    wxSlider* m_slider10922;
    wxPanel* m_panelRIGCat;
    wxRadioButton* m_radioButton185;
    wxStaticText* m_staticText189;
    wxTextCtrl* m_textCtrl191;
    wxButton* m_button208;
    wxStaticText* m_staticText18930;
    wxComboBox* m_comboBox218;
    wxStaticText* m_staticText18927;
    wxTextCtrl* m_textCtrl19128;
    wxStaticText* m_staticText18924;
    wxTextCtrl* m_textCtrl19125;
    wxStaticText* m_staticText1893055;
    wxComboBox* m_comboBaud;
    wxStaticText* m_staticText18950;
    wxTextCtrl* m_textCtrl19151;
    wxStaticText* m_staticText298;
    wxSlider* m_sliderStopBits;
    wxCheckBox* m_checkBox236;
    wxCheckBox* m_checkBox238;
    wxCheckBox* m_checkBox23634;
    wxCheckBox* m_checkBox23836;
    wxCheckBox* m_checkBox23639;
    wxCheckBox* m_checkBox23841;
    wxCheckBox* m_checkBox23644;
    wxCheckBox* m_checkBox23846;
    wxPanel* m_panelHAMLib;
    wxPanel* m_panelMemMap;
    wxPanel* m_panelXMLRPC;
    wxStdDialogButtonSizer* m_stdBtnSizer155;
    wxButton* m_button165;
    wxButton* m_button167;

protected:

public:
    DlgRigCtrlBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Rig Control"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(450,300), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX);
    virtual ~DlgRigCtrlBase();
};

#endif
