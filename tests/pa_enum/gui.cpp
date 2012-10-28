///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 10 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    m_menuBar = new wxMenuBar( 0 );
    m_menuFile = new wxMenu();
    wxMenuItem* menuFileExit;
    menuFileExit = new wxMenuItem( m_menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
    m_menuFile->Append( menuFileExit );

    m_menuBar->Append( m_menuFile, _("&File") );

    tools = new wxMenu();
    wxMenuItem* audioOptions;
    audioOptions = new wxMenuItem( tools, ID_AUDIO_OPTIONS, wxString( _("&Audio Options") ) , _("Audio options dialog."), wxITEM_NORMAL );
    tools->Append( audioOptions );

    m_menuBar->Append( tools, _("&Tools") );

    this->SetMenuBar( m_menuBar );

    wxBoxSizer* mainSizer;
    mainSizer = new wxBoxSizer( wxVERTICAL );

    m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    mainSizer->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );


    this->SetSizer( mainSizer );
    this->Layout();
    m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );

    this->Centre( wxBOTH );
    this->Centre( wxBOTH );

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
    this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
    this->Connect( audioOptions->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnAudioOptsDialog ) );
}

MainFrameBase::~MainFrameBase()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
    this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
    this->Disconnect( ID_AUDIO_OPTIONS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnAudioOptsDialog ) );
}

/*
AudioOptsDialog::AudioOptsDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    wxBoxSizer* mainSizer;
    mainSizer = new wxBoxSizer( wxVERTICAL );

    m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer4;
    bSizer4 = new wxBoxSizer( wxVERTICAL );

    m_notebook1 = new wxNotebook( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_BOTTOM );
    m_panelRx = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer20;
    bSizer20 = new wxBoxSizer( wxVERTICAL );

    wxGridSizer* gSizer4;
    gSizer4 = new wxGridSizer( 2, 1, 0, 0 );

    wxStaticBoxSizer* sbSizer2;
    sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panelRx, wxID_ANY, _("Rx Radio Device") ), wxVERTICAL );

    m_listCtrlRxInDevices = new wxListCtrl( m_panelRx, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
    sbSizer2->Add( m_listCtrlRxInDevices, 1, wxALL|wxEXPAND, 1 );

    wxBoxSizer* bSizer811;
    bSizer811 = new wxBoxSizer( wxHORIZONTAL );

    m_staticText51 = new wxStaticText( m_panelRx, wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText51->Wrap( -1 );
    bSizer811->Add( m_staticText51, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_textCtrlRxIn = new wxTextCtrl( m_panelRx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    bSizer811->Add( m_textCtrlRxIn, 1, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    m_staticText6 = new wxStaticText( m_panelRx, wxID_ANY, _("Sample Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText6->Wrap( -1 );
    bSizer811->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_cbSampleRateRxIn = new wxComboBox( m_panelRx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN );
    bSizer811->Add( m_cbSampleRateRxIn, 0, wxALL, 1 );

    sbSizer2->Add( bSizer811, 0, wxEXPAND, 5 );

    gSizer4->Add( sbSizer2, 1, wxEXPAND, 5 );

    wxStaticBoxSizer* sbSizer3;
    sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panelRx, wxID_ANY, _("Rx Speaker Stream") ), wxVERTICAL );

    m_listCtrlRxOutDevices = new wxListCtrl( m_panelRx, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
    sbSizer3->Add( m_listCtrlRxOutDevices, 1, wxALL|wxEXPAND, 1 );

    wxBoxSizer* bSizer81;
    bSizer81 = new wxBoxSizer( wxHORIZONTAL );

    m_staticText9 = new wxStaticText( m_panelRx, wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText9->Wrap( -1 );
    bSizer81->Add( m_staticText9, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    m_textCtrlRxOut = new wxTextCtrl( m_panelRx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    bSizer81->Add( m_textCtrlRxOut, 1, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    m_staticText10 = new wxStaticText( m_panelRx, wxID_ANY, _("Sample Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText10->Wrap( -1 );
    bSizer81->Add( m_staticText10, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_cbSampleRateRxOut = new wxComboBox( m_panelRx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN );
    bSizer81->Add( m_cbSampleRateRxOut, 0, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    sbSizer3->Add( bSizer81, 0, wxEXPAND, 2 );

    gSizer4->Add( sbSizer3, 1, wxEXPAND, 2 );

    bSizer20->Add( gSizer4, 1, wxEXPAND, 1 );

    m_panelRx->SetSizer( bSizer20 );
    m_panelRx->Layout();
    bSizer20->Fit( m_panelRx );
    m_notebook1->AddPage( m_panelRx, _("Receive"), true );
    m_panelTx = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer18;
    bSizer18 = new wxBoxSizer( wxVERTICAL );

    wxGridSizer* gSizer2;
    gSizer2 = new wxGridSizer( 2, 1, 0, 0 );

    wxStaticBoxSizer* sbSizer22;
    sbSizer22 = new wxStaticBoxSizer( new wxStaticBox( m_panelTx, wxID_ANY, _("Tx Microphone Stream") ), wxVERTICAL );

    m_listCtrlTxInDevices = new wxListCtrl( m_panelTx, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
    sbSizer22->Add( m_listCtrlTxInDevices, 1, wxALL|wxEXPAND, 1 );

    wxBoxSizer* bSizer83;
    bSizer83 = new wxBoxSizer( wxHORIZONTAL );

    m_staticText12 = new wxStaticText( m_panelTx, wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText12->Wrap( -1 );
    bSizer83->Add( m_staticText12, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_textCtrlTxIn = new wxTextCtrl( m_panelTx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    bSizer83->Add( m_textCtrlTxIn, 1, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    m_staticText11 = new wxStaticText( m_panelTx, wxID_ANY, _("Sample Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText11->Wrap( -1 );
    bSizer83->Add( m_staticText11, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_cbSampleRateTxIn = new wxComboBox( m_panelTx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN );
    bSizer83->Add( m_cbSampleRateTxIn, 0, wxALL, 1 );

    sbSizer22->Add( bSizer83, 0, wxEXPAND, 2 );

    gSizer2->Add( sbSizer22, 1, wxEXPAND, 5 );

    wxStaticBoxSizer* sbSizer21;
    sbSizer21 = new wxStaticBoxSizer( new wxStaticBox( m_panelTx, wxID_ANY, _("Tx Radio Stream") ), wxVERTICAL );

    m_listCtrlTxOutDevices = new wxListCtrl( m_panelTx, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
    sbSizer21->Add( m_listCtrlTxOutDevices, 1, wxALL|wxEXPAND, 2 );

    wxBoxSizer* bSizer82;
    bSizer82 = new wxBoxSizer( wxHORIZONTAL );

    m_staticText81 = new wxStaticText( m_panelTx, wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText81->Wrap( -1 );
    bSizer82->Add( m_staticText81, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    m_textCtrlTxOut = new wxTextCtrl( m_panelTx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    bSizer82->Add( m_textCtrlTxOut, 1, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    m_staticText71 = new wxStaticText( m_panelTx, wxID_ANY, _("Sample Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText71->Wrap( -1 );
    bSizer82->Add( m_staticText71, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

    m_cbSampleRateTxOut = new wxComboBox( m_panelTx, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN );
    bSizer82->Add( m_cbSampleRateTxOut, 0, wxALL, 1 );

    sbSizer21->Add( bSizer82, 0, wxEXPAND, 2 );

    gSizer2->Add( sbSizer21, 1, wxEXPAND, 5 );

    bSizer18->Add( gSizer2, 1, wxEXPAND, 1 );

    m_panelTx->SetSizer( bSizer18 );
    m_panelTx->Layout();
    bSizer18->Fit( m_panelTx );
    m_notebook1->AddPage( m_panelTx, _("Transmit"), false );
    m_panelAPI = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer12;
    bSizer12 = new wxBoxSizer( wxHORIZONTAL );

    wxGridSizer* gSizer31;
    gSizer31 = new wxGridSizer( 2, 1, 0, 0 );

    wxStaticBoxSizer* sbSizer1;
    sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_panelAPI, wxID_ANY, _("PortAudio") ), wxVERTICAL );

    wxGridSizer* gSizer3;
    gSizer3 = new wxGridSizer( 4, 2, 0, 0 );

    m_staticText7 = new wxStaticText( m_panelAPI, wxID_ANY, _("PortAudio Version String:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText7->Wrap( -1 );
    gSizer3->Add( m_staticText7, 0, wxALIGN_RIGHT|wxALL|wxALIGN_CENTER_VERTICAL, 1 );

    wxBoxSizer* bSizer151;
    bSizer151 = new wxBoxSizer( wxVERTICAL );

    m_textStringVer = new wxTextCtrl( m_panelAPI, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    bSizer151->Add( m_textStringVer, 0, wxALL|wxEXPAND, 1 );

    gSizer3->Add( bSizer151, 1, wxEXPAND, 2 );

    m_staticText8 = new wxStaticText( m_panelAPI, wxID_ANY, _("PortAudio Int Version:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText8->Wrap( -1 );
    gSizer3->Add( m_staticText8, 0, wxALIGN_RIGHT|wxALL|wxALIGN_CENTER_VERTICAL, 1 );

    wxBoxSizer* bSizer13;
    bSizer13 = new wxBoxSizer( wxVERTICAL );

    m_textIntVer = new wxTextCtrl( m_panelAPI, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    bSizer13->Add( m_textIntVer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );

    gSizer3->Add( bSizer13, 1, wxEXPAND, 5 );

    m_staticText5 = new wxStaticText( m_panelAPI, wxID_ANY, _("Device Count:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText5->Wrap( -1 );
    gSizer3->Add( m_staticText5, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 1 );

    wxBoxSizer* bSizer14;
    bSizer14 = new wxBoxSizer( wxVERTICAL );

    m_textCDevCount = new wxTextCtrl( m_panelAPI, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 45,-1 ), wxTE_READONLY );
    m_textCDevCount->SetMaxSize( wxSize( 45,-1 ) );

    bSizer14->Add( m_textCDevCount, 0, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    gSizer3->Add( bSizer14, 1, wxEXPAND, 5 );

    m_staticText4 = new wxStaticText( m_panelAPI, wxID_ANY, _("API Count:"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticText4->Wrap( -1 );
    gSizer3->Add( m_staticText4, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 1 );

    wxBoxSizer* bSizer15;
    bSizer15 = new wxBoxSizer( wxVERTICAL );

    m_textAPICount = new wxTextCtrl( m_panelAPI, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 45,-1 ), wxTE_READONLY );
    m_textAPICount->SetMaxSize( wxSize( 45,-1 ) );

    bSizer15->Add( m_textAPICount, 0, wxALIGN_CENTER_VERTICAL|wxALL, 1 );

    gSizer3->Add( bSizer15, 1, wxEXPAND, 5 );

    sbSizer1->Add( gSizer3, 1, wxEXPAND, 2 );

    gSizer31->Add( sbSizer1, 1, wxEXPAND, 2 );

    wxStaticBoxSizer* sbSizer6;
    sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( m_panelAPI, wxID_ANY, _("Other") ), wxVERTICAL );

    gSizer31->Add( sbSizer6, 1, wxEXPAND, 5 );

    bSizer12->Add( gSizer31, 1, wxEXPAND, 5 );

    m_panelAPI->SetSizer( bSizer12 );
    m_panelAPI->Layout();
    bSizer12->Fit( m_panelAPI );
    m_notebook1->AddPage( m_panelAPI, _("API Info"), false );

    bSizer4->Add( m_notebook1, 1, wxEXPAND | wxALL, 0 );

    m_panel1->SetSizer( bSizer4 );
    m_panel1->Layout();
    bSizer4->Fit( m_panel1 );
    mainSizer->Add( m_panel1, 1, wxEXPAND | wxALL, 1 );

    wxBoxSizer* bSizer6;
    bSizer6 = new wxBoxSizer( wxHORIZONTAL );

    m_btnRefresh = new wxButton( this, wxID_ANY, _("Refresh"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer6->Add( m_btnRefresh, 0, wxALIGN_CENTER|wxALL, 2 );

    m_sdbSizer1 = new wxStdDialogButtonSizer();
    m_sdbSizer1OK = new wxButton( this, wxID_OK );
    m_sdbSizer1->AddButton( m_sdbSizer1OK );
    m_sdbSizer1Apply = new wxButton( this, wxID_APPLY );
    m_sdbSizer1->AddButton( m_sdbSizer1Apply );
    m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
    m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
    m_sdbSizer1->Realize();

    bSizer6->Add( m_sdbSizer1, 1, wxALIGN_CENTER_VERTICAL, 2 );

    mainSizer->Add( bSizer6, 0, wxEXPAND, 2 );

    this->SetSizer( mainSizer );
    this->Layout();

    this->Centre( wxBOTH );
    this->Centre( wxBOTH );

    // Connect Events
//    this->Connect( wxEVT_ACTIVATE_APP, wxActivateEventHandler( AudioOptsDialog::OnActivateApp ) );
//    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AudioOptsDialog::OnCloseFrame ) );
    m_listCtrlRxInDevices->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnRxInDeviceSelect ), NULL, this );
    m_listCtrlRxOutDevices->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnRxOutDeviceSelect ), NULL, this );
    m_listCtrlTxInDevices->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnTxInDeviceSelect ), NULL, this );
    m_listCtrlTxOutDevices->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnTxOutDeviceSelect ), NULL, this );
    m_btnRefresh->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnRefreshClick ), NULL, this );
    m_sdbSizer1Apply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnApplyAudioParameters ), NULL, this );
    m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnCancelAudioParameters ), NULL, this );
    m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnOkAudioParameters ), NULL, this );
    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AudioOptsDialog::OnClose ) );
    this->Connect( wxEVT_HIBERNATE, wxActivateEventHandler( AudioOptsDialog::OnHibernate ) );
    this->Connect( wxEVT_ICONIZE, wxIconizeEventHandler( AudioOptsDialog::OnIconize ) );
    this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( AudioOptsDialog::OnInitDialog ));
}

AudioOptsDialog::~AudioOptsDialog()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AudioOptsDialog::OnClose));
    this->Disconnect( wxEVT_HIBERNATE, wxActivateEventHandler( AudioOptsDialog::OnHibernate));
    this->Disconnect( wxEVT_ICONIZE, wxIconizeEventHandler( AudioOptsDialog::OnIconize));
    this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( AudioOptsDialog::OnInitDialog));

    // Disconnect Events
//    this->Disconnect( wxEVT_ACTIVATE_APP, wxActivateEventHandler( AudioOptsDialog::OnActivateApp ) );
//    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AudioOptsDialog::OnCloseFrame ) );
    m_listCtrlRxInDevices->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnRxInDeviceSelect ), NULL, this );
    m_listCtrlRxOutDevices->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnRxOutDeviceSelect ), NULL, this );
    m_listCtrlTxInDevices->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnTxInDeviceSelect ), NULL, this );
    m_listCtrlTxOutDevices->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( AudioOptsDialog::OnTxOutDeviceSelect ), NULL, this );
    m_btnRefresh->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnRefreshClick ), NULL, this );
    m_sdbSizer1Apply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnApplyAudioParameters ), NULL, this );
    m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnCancelAudioParameters ), NULL, this );
    m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AudioOptsDialog::OnOkAudioParameters ), NULL, this );

}
*/
