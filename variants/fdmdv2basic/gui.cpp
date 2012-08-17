///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 17 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainDialogBase::MainDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Settings") ), wxVERTICAL );
	
	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 3, 1, 0, 0 );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Audio") ), wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 4, 2, 0, 0 );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Rx In (radio):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	gSizer1->Add( m_staticText1, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboRxIn = new wxComboBox( this, wxID_ANY, _("<default>"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer1->Add( m_comboRxIn, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Rx Out (spkr):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gSizer1->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboRxOut = new wxComboBox( this, wxID_ANY, _("<default>"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer1->Add( m_comboRxOut, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, _("Tx In (mic):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	gSizer1->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboTxIn = new wxComboBox( this, wxID_ANY, _("<default>"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer1->Add( m_comboTxIn, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, _("Tx Out (radio):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	gSizer1->Add( m_staticText4, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboTxOut = new wxComboBox( this, wxID_ANY, _("<default>"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer1->Add( m_comboTxOut, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	
	sbSizer3->Add( gSizer1, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxFIXED_MINSIZE, 2 );
	
	
	gSizer4->Add( sbSizer3, 1, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxFIXED_MINSIZE, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("label") ), wxVERTICAL );
	
	wxGridSizer* gSizer111;
	gSizer111 = new wxGridSizer( 2, 2, 0, 0 );
	
	m_staticText111 = new wxStaticText( this, wxID_ANY, _("Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	gSizer111->Add( m_staticText111, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboBox111 = new wxComboBox( this, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer111->Add( m_comboBox111, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	m_staticText211 = new wxStaticText( this, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	gSizer111->Add( m_staticText211, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboBox211 = new wxComboBox( this, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer111->Add( m_comboBox211, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	
	sbSizer4->Add( gSizer111, 0, wxALIGN_CENTER|wxEXPAND|wxFIXED_MINSIZE, 2 );
	
	
	gSizer4->Add( sbSizer4, 1, wxEXPAND|wxFIXED_MINSIZE, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Comm Port") ), wxVERTICAL );
	
	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 2, 2, 0, 0 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, _("Radio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer11->Add( m_staticText11, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboBox11 = new wxComboBox( this, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer11->Add( m_comboBox11, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, _("Port:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer11->Add( m_staticText21, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	m_comboBox21 = new wxComboBox( this, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer11->Add( m_comboBox21, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	
	sbSizer5->Add( gSizer11, 0, wxALIGN_CENTER|wxEXPAND|wxFIXED_MINSIZE, 2 );
	
	
	gSizer4->Add( sbSizer5, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	sbSizer1->Add( gSizer4, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer1, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operation") ), wxVERTICAL );
	
	m_toggleStartStop = new wxToggleButton( this, wxID_ANY, _("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_toggleStartStop, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	m_toggleRxTx = new wxToggleButton( this, wxID_ANY, _("Tx"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_toggleRxTx, 2, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer2, 0, wxEXPAND, 5 );
	
	
	mainSizer->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_staticLine = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainSizer->Add( m_staticLine, 0, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();
	
	mainSizer->Add( m_sdbSizer, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 5 );
	
	
	this->SetSizer( mainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainDialogBase::OnCloseDialog ) );
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( MainDialogBase::OnInitDialog ) );
	m_comboRxIn->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRxInSelect ), NULL, this );
	m_comboRxOut->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRxOutSelect ), NULL, this );
	m_comboTxIn->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnTxInSelect ), NULL, this );
	m_comboTxOut->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnTxOutSelect ), NULL, this );
	m_comboBox11->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRadioSelect ), NULL, this );
	m_comboBox21->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnPortSelect ), NULL, this );
	m_toggleStartStop->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnToggleStartStop ), NULL, this );
	m_toggleRxTx->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnToggleRxRx ), NULL, this );
	m_sdbSizerCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnCancelClick ), NULL, this );
}

MainDialogBase::~MainDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainDialogBase::OnCloseDialog ) );
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( MainDialogBase::OnInitDialog ) );
	m_comboRxIn->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRxInSelect ), NULL, this );
	m_comboRxOut->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRxOutSelect ), NULL, this );
	m_comboTxIn->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnTxInSelect ), NULL, this );
	m_comboTxOut->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnTxOutSelect ), NULL, this );
	m_comboBox11->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnRadioSelect ), NULL, this );
	m_comboBox21->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainDialogBase::OnPortSelect ), NULL, this );
	m_toggleStartStop->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnToggleStartStop ), NULL, this );
	m_toggleRxTx->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnToggleRxRx ), NULL, this );
	m_sdbSizerCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnCancelClick ), NULL, this );
	
}
