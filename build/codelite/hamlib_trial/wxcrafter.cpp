//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);
    
    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer1->Add(m_mainPanel, 1, wxEXPAND, 5);
    
    wxBoxSizer* boxSizer33 = new wxBoxSizer(wxVERTICAL);
    m_mainPanel->SetSizer(boxSizer33);
    
    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);
    
    m_mbFile = new wxMenu();
    m_menuBar->Append(m_mbFile, _("File"));
    
    m_mbiNew = new wxMenuItem(m_mbFile, wxID_NEW, _("New"), wxT(""), wxITEM_NORMAL);
    m_mbFile->Append(m_mbiNew);
    
    m_mbiOpen = new wxMenuItem(m_mbFile, wxID_OPEN, _("Open"), wxT(""), wxITEM_NORMAL);
    m_mbFile->Append(m_mbiOpen);
    
    m_mbiSave = new wxMenuItem(m_mbFile, wxID_SAVE, _("Save"), wxT(""), wxITEM_NORMAL);
    m_mbFile->Append(m_mbiSave);
    
    m_mbiSaveAs = new wxMenuItem(m_mbFile, wxID_SAVEAS, _("Save As"), wxT(""), wxITEM_NORMAL);
    m_mbFile->Append(m_mbiSaveAs);
    
    m_mbFile->AppendSeparator();
    
    m_mbiExit = new wxMenuItem(m_mbFile, wxID_EXIT, _("Exit	Alt-X"), _("Quit"), wxITEM_NORMAL);
    m_mbFile->Append(m_mbiExit);
    
    m_mbTools = new wxMenu();
    m_menuBar->Append(m_mbTools, _("Tools"));
    
    m_mbiPrefs = new wxMenuItem(m_mbTools, wxID_PREFERENCES, _("Preferences"), wxT(""), wxITEM_NORMAL);
    m_mbTools->Append(m_mbiPrefs);
    
    m_mbHelp = new wxMenu();
    m_menuBar->Append(m_mbHelp, _("Help"));
    
    m_menuItem9 = new wxMenuItem(m_mbHelp, wxID_ABOUT, _("About..."), wxT(""), wxITEM_NORMAL);
    m_mbHelp->Append(m_menuItem9);
    
    m_mainToolbar = this->CreateToolBar(wxTB_FLAT, wxID_ANY);
    m_mainToolbar->SetToolBitmapSize(wxSize(16,16));
    
    m_mainToolbar->AddTool(wxID_NEW, _("New"), wxXmlResource::Get()->LoadBitmap(wxT("placeholder16")), wxNullBitmap, wxITEM_NORMAL, _("New"), _("New"), NULL);
    
    m_mainToolbar->AddTool(wxID_OPEN, _("Tool Label"), wxXmlResource::Get()->LoadBitmap(wxT("placeholder16")), wxNullBitmap, wxITEM_NORMAL, _("Open"), _("Open"), NULL);
    m_mainToolbar->Realize();
    
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_mainPanel->Connect(wxEVT_SIZE, wxSizeEventHandler(MainFrameBaseClass::OnSize), NULL, this);
    this->Connect(m_mbiExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Connect(m_mbiPrefs->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnToolsPrefs), NULL, this);
    this->Connect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    this->Connect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnNew), NULL, this);
    this->Connect(wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnOpen), NULL, this);
    
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    m_mainPanel->Disconnect(wxEVT_SIZE, wxSizeEventHandler(MainFrameBaseClass::OnSize), NULL, this);
    this->Disconnect(m_mbiExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_mbiPrefs->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnToolsPrefs), NULL, this);
    this->Disconnect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    this->Disconnect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnNew), NULL, this);
    this->Disconnect(wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnOpen), NULL, this);
    
}

DlgRigCtrlBase::DlgRigCtrlBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer51 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer51);
    
    m_notebook53 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxBK_DEFAULT);
    
    boxSizer51->Add(m_notebook53, 1, wxALL|wxEXPAND, 2);
    
    m_panelHDWPTT = new wxPanel(m_notebook53, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_panelHDWPTT->SetToolTip(_("Hardware Push-to-Talk"));
    m_notebook53->AddPage(m_panelHDWPTT, _("Hardware PTT"), true);
    
    wxFlexGridSizer* flexGridSizer135 = new wxFlexGridSizer(  3, 1, 0, 0);
    flexGridSizer135->SetFlexibleDirection( wxBOTH );
    flexGridSizer135->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer135->AddGrowableCol(1);
    flexGridSizer135->AddGrowableRow(3);
    m_panelHDWPTT->SetSizer(flexGridSizer135);
    
    wxStaticBoxSizer* staticBoxSizer169 = new wxStaticBoxSizer( new wxStaticBox(m_panelHDWPTT, wxID_ANY, wxT("")), wxVERTICAL);
    
    flexGridSizer135->Add(staticBoxSizer169, 0, wxALL|wxEXPAND, 2);
    
    m_checkBox7537 = new wxCheckBox(m_panelHDWPTT, wxID_ANY, _("PTT tone on right audio channel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox7537->SetValue(false);
    
    staticBoxSizer169->Add(m_checkBox7537, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    
    wxGridSizer* gridSizer159 = new wxGridSizer(  1, 1, 0, 0);
    
    flexGridSizer135->Add(gridSizer159, 0, wxALL|wxALIGN_LEFT|wxALIGN_TOP, 2);
    
    wxStaticBoxSizer* staticBoxSizer157 = new wxStaticBoxSizer( new wxStaticBox(m_panelHDWPTT, wxID_ANY, _("h/w ptt device pin")), wxHORIZONTAL);
    
    gridSizer159->Add(staticBoxSizer157, 0, wxALL|wxEXPAND|wxALIGN_TOP, 2);
    
    wxBoxSizer* boxSizer175 = new wxBoxSizer(wxVERTICAL);
    
    staticBoxSizer157->Add(boxSizer175, 1, wxALL, 2);
    
    m_checkBox9112 = new wxCheckBox(m_panelHDWPTT, wxID_ANY, _("Use separate PTT device pin"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox9112->SetValue(false);
    
    boxSizer175->Add(m_checkBox9112, 0, wxALL|wxALIGN_TOP, 2);
    
    m_staticText173 = new wxStaticText(m_panelHDWPTT, wxID_ANY, _("Device:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer175->Add(m_staticText173, 0, wxALL, 5);
    
    wxArrayString m_comboBox9313Arr;
    m_comboBox9313 = new wxComboBox(m_panelHDWPTT, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), m_comboBox9313Arr, 0);
    
    boxSizer175->Add(m_comboBox9313, 0, wxALL, 2);
    
    wxBoxSizer* boxSizer171 = new wxBoxSizer(wxHORIZONTAL);
    
    staticBoxSizer157->Add(boxSizer171, 1, wxALL, 2);
    
    wxBoxSizer* boxSizer12714 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer171->Add(boxSizer12714, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 2);
    
    wxArrayString m_radioBox10115Arr;
    m_radioBox10115Arr.Add(wxT("Normal (V-)"));
    m_radioBox10115Arr.Add(wxT("Inverted (V+)"));
    m_radioBox10115 = new wxRadioBox(m_panelHDWPTT, wxID_ANY, _("Use RTS"), wxDefaultPosition, wxSize(-1,-1), m_radioBox10115Arr, 2, wxRA_SPECIFY_COLS);
    m_radioBox10115->SetSelection(0);
    
    boxSizer12714->Add(m_radioBox10115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 2);
    
    wxArrayString m_radioBox10316Arr;
    m_radioBox10316Arr.Add(wxT("Normal (V-)"));
    m_radioBox10316Arr.Add(wxT("Inverted (V+)"));
    m_radioBox10316 = new wxRadioBox(m_panelHDWPTT, wxID_ANY, _("Use DTR"), wxDefaultPosition, wxSize(-1,-1), m_radioBox10316Arr, 2, wxRA_SPECIFY_COLS);
    m_radioBox10316->SetSelection(0);
    
    boxSizer12714->Add(m_radioBox10316, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 2);
    
    wxBoxSizer* boxSizer13118 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer12714->Add(boxSizer13118, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_button11319 = new wxButton(m_panelHDWPTT, wxID_ANY, _("Initialize"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer13118->Add(m_button11319, 1, wxALL, 2);
    
    wxStaticBoxSizer* staticBoxSizer79420 = new wxStaticBoxSizer( new wxStaticBox(m_panelHDWPTT, wxID_ANY, _("PTT delay for all CAT/PTT types")), wxHORIZONTAL);
    
    flexGridSizer135->Add(staticBoxSizer79420, 0, wxALL|wxEXPAND|wxALIGN_LEFT, 2);
    
    m_staticText177 = new wxStaticText(m_panelHDWPTT, wxID_ANY, _("Start of xmit delay"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    staticBoxSizer79420->Add(m_staticText177, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_slider10721 = new wxSlider(m_panelHDWPTT, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxSize(-1,-1), wxSL_HORIZONTAL);
    
    staticBoxSizer79420->Add(m_slider10721, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_staticText179 = new wxStaticText(m_panelHDWPTT, wxID_ANY, _("End of xmit delay:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    staticBoxSizer79420->Add(m_staticText179, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_slider10922 = new wxSlider(m_panelHDWPTT, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxSize(-1,-1), wxSL_HORIZONTAL);
    
    staticBoxSizer79420->Add(m_slider10922, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_panelRIGCat = new wxPanel(m_notebook53, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_panelRIGCat->SetToolTip(_("RigCat"));
    m_notebook53->AddPage(m_panelRIGCat, _("RigCAT"), false);
    
    wxBoxSizer* boxSizer67 = new wxBoxSizer(wxVERTICAL);
    m_panelRIGCat->SetSizer(boxSizer67);
    
    m_radioButton185 = new wxRadioButton(m_panelRIGCat, wxID_ANY, _("Use RigCAT"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_radioButton185->SetValue(1);
    
    boxSizer67->Add(m_radioButton185, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 2);
    
    wxStaticBoxSizer* staticBoxSizer183 = new wxStaticBoxSizer( new wxStaticBox(m_panelRIGCat, wxID_ANY, wxT("")), wxVERTICAL);
    
    boxSizer67->Add(staticBoxSizer183, 1, wxALL|wxALIGN_TOP, 2);
    
    wxFlexGridSizer* flexGridSizer187 = new wxFlexGridSizer(  1, 1, 0, 0);
    flexGridSizer187->SetFlexibleDirection( wxBOTH );
    flexGridSizer187->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer187->AddGrowableCol(1);
    flexGridSizer187->AddGrowableRow(1);
    
    staticBoxSizer183->Add(flexGridSizer187, 0, wxALL, 2);
    
    wxFlexGridSizer* flexGridSizer204 = new wxFlexGridSizer(  3, 4, 0, 0);
    flexGridSizer204->SetFlexibleDirection( wxBOTH );
    flexGridSizer204->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    flexGridSizer187->Add(flexGridSizer204, 1, wxALL|wxEXPAND, 2);
    
    wxBoxSizer* boxSizer193 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer204->Add(boxSizer193, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 2);
    
    m_staticText189 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("File:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer193->Add(m_staticText189, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_textCtrl191 = new wxTextCtrl(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer193->Add(m_textCtrl191, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxBoxSizer* boxSizer206 = new wxBoxSizer(wxVERTICAL);
    
    flexGridSizer204->Add(boxSizer206, 1, wxALL|wxEXPAND, 5);
    
    m_button208 = new wxButton(m_panelRIGCat, wxID_ANY, _("Open"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer206->Add(m_button208, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxBoxSizer* boxSizer19329 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer204->Add(boxSizer19329, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 2);
    
    m_staticText18930 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Device:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19329->Add(m_staticText18930, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxArrayString m_comboBox218Arr;
    m_comboBox218 = new wxComboBox(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), m_comboBox218Arr, 0);
    
    boxSizer19329->Add(m_comboBox218, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxFlexGridSizer* flexGridSizer222 = new wxFlexGridSizer(  1, 3, 0, 0);
    flexGridSizer222->SetFlexibleDirection( wxBOTH );
    flexGridSizer222->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer222->AddGrowableCol(2);
    
    staticBoxSizer183->Add(flexGridSizer222, 0, wxALL, 2);
    
    wxBoxSizer* boxSizer19326 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer222->Add(boxSizer19326, 1, wxALL|wxEXPAND, 2);
    
    m_staticText18927 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Retries:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19326->Add(m_staticText18927, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_textCtrl19128 = new wxTextCtrl(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19326->Add(m_textCtrl19128, 1, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxBoxSizer* boxSizer19323 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer222->Add(boxSizer19323, 1, wxALL|wxEXPAND, 2);
    
    m_staticText18924 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Retry Interval:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19323->Add(m_staticText18924, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_textCtrl19125 = new wxTextCtrl(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19323->Add(m_textCtrl19125, 1, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxBoxSizer* boxSizer1932954 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer222->Add(boxSizer1932954, 1, wxALL|wxEXPAND, 2);
    
    m_staticText1893055 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Baud Rate:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer1932954->Add(m_staticText1893055, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxArrayString m_comboBaudArr;
    m_comboBaudArr.Add(wxT("300"));
    m_comboBaudArr.Add(wxT("600"));
    m_comboBaudArr.Add(wxT("1200"));
    m_comboBaudArr.Add(wxT("2400"));
    m_comboBaudArr.Add(wxT("9600"));
    m_comboBaudArr.Add(wxT("19200"));
    m_comboBaudArr.Add(wxT("38400"));
    m_comboBaudArr.Add(wxT("56800"));
    m_comboBaud = new wxComboBox(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), m_comboBaudArr, 0);
    
    boxSizer1932954->Add(m_comboBaud, 1, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxFlexGridSizer* flexGridSizer18747 = new wxFlexGridSizer(  1, 1, 0, 0);
    flexGridSizer18747->SetFlexibleDirection( wxBOTH );
    flexGridSizer18747->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer18747->AddGrowableCol(1);
    
    staticBoxSizer183->Add(flexGridSizer18747, 0, wxALL|wxEXPAND, 2);
    
    wxFlexGridSizer* flexGridSizer20448 = new wxFlexGridSizer(  1, 3, 0, 0);
    flexGridSizer20448->SetFlexibleDirection( wxBOTH );
    flexGridSizer20448->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer20448->AddGrowableCol(3);
    flexGridSizer20448->AddGrowableRow(1);
    
    flexGridSizer18747->Add(flexGridSizer20448, 1, wxALL, 2);
    
    wxBoxSizer* boxSizer19349 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer20448->Add(boxSizer19349, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 2);
    
    m_staticText18950 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Write Delay (ms):"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19349->Add(m_staticText18950, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    m_textCtrl19151 = new wxTextCtrl(m_panelRIGCat, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19349->Add(m_textCtrl19151, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2);
    
    wxBoxSizer* boxSizer298 = new wxBoxSizer(wxHORIZONTAL);
    
    flexGridSizer20448->Add(boxSizer298, 1, wxALL|wxEXPAND, 2);
    
    m_staticText298 = new wxStaticText(m_panelRIGCat, wxID_ANY, _("Stop Bits:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer298->Add(m_staticText298, 0, wxALL, 2);
    
    m_sliderStopBits = new wxSlider(m_panelRIGCat, wxID_ANY, 0, 0, 2, wxDefaultPosition, wxSize(-1,-1), wxSL_HORIZONTAL);
    
    boxSizer298->Add(m_sliderStopBits, 0, wxALL, 5);
    
    wxFlexGridSizer* flexGridSizer224 = new wxFlexGridSizer(  1, 4, 0, 0);
    flexGridSizer224->SetFlexibleDirection( wxBOTH );
    flexGridSizer224->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer224->AddGrowableCol(4);
    flexGridSizer224->AddGrowableRow(1);
    
    staticBoxSizer183->Add(flexGridSizer224, 0, wxALL|wxEXPAND, 2);
    
    flexGridSizer224->Add(0, 0, 1, wxALL|wxEXPAND, 2);
    
    m_checkBox236 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox236->SetValue(false);
    
    flexGridSizer224->Add(m_checkBox236, 0, wxALL|wxEXPAND, 1);
    
    flexGridSizer224->Add(0, 0, 1, wxALL|wxEXPAND, 2);
    
    m_checkBox238 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox238->SetValue(false);
    
    flexGridSizer224->Add(m_checkBox238, 1, wxALL|wxEXPAND, 2);
    
    wxFlexGridSizer* flexGridSizer22432 = new wxFlexGridSizer(  1, 4, 0, 0);
    flexGridSizer22432->SetFlexibleDirection( wxBOTH );
    flexGridSizer22432->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer22432->AddGrowableCol(4);
    flexGridSizer22432->AddGrowableRow(1);
    
    staticBoxSizer183->Add(flexGridSizer22432, 0, wxALL|wxEXPAND, 2);
    
    flexGridSizer22432->Add(0, 0, 0, wxALL, 2);
    
    m_checkBox23634 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23634->SetValue(false);
    
    flexGridSizer22432->Add(m_checkBox23634, 0, wxALL, 2);
    
    flexGridSizer22432->Add(0, 0, 0, wxALL, 2);
    
    m_checkBox23836 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23836->SetValue(false);
    
    flexGridSizer22432->Add(m_checkBox23836, 0, wxALL, 2);
    
    wxFlexGridSizer* flexGridSizer22437 = new wxFlexGridSizer(  1, 4, 0, 0);
    flexGridSizer22437->SetFlexibleDirection( wxBOTH );
    flexGridSizer22437->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer22437->AddGrowableCol(4);
    flexGridSizer22437->AddGrowableRow(1);
    
    staticBoxSizer183->Add(flexGridSizer22437, 0, wxALL|wxEXPAND, 2);
    
    flexGridSizer22437->Add(0, 0, 1, wxALL|wxEXPAND, 2);
    
    m_checkBox23639 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23639->SetValue(false);
    
    flexGridSizer22437->Add(m_checkBox23639, 1, wxALL|wxEXPAND, 2);
    
    flexGridSizer22437->Add(0, 0, 1, wxALL|wxEXPAND, 2);
    
    m_checkBox23841 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23841->SetValue(false);
    
    flexGridSizer22437->Add(m_checkBox23841, 1, wxALL|wxEXPAND, 2);
    
    wxFlexGridSizer* flexGridSizer22442 = new wxFlexGridSizer(  1, 4, 0, 0);
    flexGridSizer22442->SetFlexibleDirection( wxBOTH );
    flexGridSizer22442->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer22442->AddGrowableCol(4);
    flexGridSizer22442->AddGrowableRow(1);
    
    staticBoxSizer183->Add(flexGridSizer22442, 0, wxALL|wxEXPAND, 2);
    
    flexGridSizer22442->Add(0, 0, 0, wxALL, 2);
    
    m_checkBox23644 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23644->SetValue(false);
    
    flexGridSizer22442->Add(m_checkBox23644, 0, wxALL, 2);
    
    flexGridSizer22442->Add(0, 0, 0, wxALL, 2);
    
    m_checkBox23846 = new wxCheckBox(m_panelRIGCat, wxID_ANY, _("My CheckBox"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBox23846->SetValue(false);
    
    flexGridSizer22442->Add(m_checkBox23846, 0, wxALL, 2);
    
    m_panelHAMLib = new wxPanel(m_notebook53, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_panelHAMLib->SetToolTip(_("Hamlib Configuration"));
    m_notebook53->AddPage(m_panelHAMLib, _("Hamlib"), false);
    
    wxStaticBoxSizer* staticBoxSizer296 = new wxStaticBoxSizer( new wxStaticBox(m_panelHAMLib, wxID_ANY, _("My Label")), wxVERTICAL);
    m_panelHAMLib->SetSizer(staticBoxSizer296);
    
    m_panelMemMap = new wxPanel(m_notebook53, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_panelMemMap->SetToolTip(_("Memory Mapped control"));
    m_notebook53->AddPage(m_panelMemMap, _("MemMap"), false);
    
    wxStaticBoxSizer* staticBoxSizer294 = new wxStaticBoxSizer( new wxStaticBox(m_panelMemMap, wxID_ANY, _("My Label")), wxVERTICAL);
    m_panelMemMap->SetSizer(staticBoxSizer294);
    
    m_panelXMLRPC = new wxPanel(m_notebook53, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_panelXMLRPC->SetToolTip(_("XML-RPC control"));
    m_notebook53->AddPage(m_panelXMLRPC, _("XML-RPC"), false);
    
    wxStaticBoxSizer* staticBoxSizer85 = new wxStaticBoxSizer( new wxStaticBox(m_panelXMLRPC, wxID_ANY, _("My Label")), wxVERTICAL);
    m_panelXMLRPC->SetSizer(staticBoxSizer85);
    
    m_stdBtnSizer155 = new wxStdDialogButtonSizer();
    
    boxSizer51->Add(m_stdBtnSizer155, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 2);
    
    m_button165 = new wxButton(this, wxID_APPLY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer155->AddButton(m_button165);
    
    m_button167 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button167->SetDefault();
    m_stdBtnSizer155->AddButton(m_button167);
    m_stdBtnSizer155->Realize();
    
    
    SetSizeHints(450,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

DlgRigCtrlBase::~DlgRigCtrlBase()
{
}