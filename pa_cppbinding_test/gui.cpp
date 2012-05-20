///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 17 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menuBar = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* menuFileExit;
	menuFileExit = new wxMenuItem( m_menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( menuFileExit );
	
	m_menuBar->Append( m_menuFile, _("&File") ); 
	
	this->SetMenuBar( m_menuBar );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	m_audioInfo = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_audioInfo->SetMinSize( wxSize( 65,65 ) );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer2->SetMinSize( wxSize( 65,65 ) ); 
	m_comboBoxLeft = new wxComboBox( m_audioInfo, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBoxLeft->SetToolTip( _("Input Audio Interface") );
	m_comboBoxLeft->SetMinSize( wxSize( 65,65 ) );
	
	bSizer2->Add( m_comboBoxLeft, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer7->Add( bSizer2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer3->SetMinSize( wxSize( 65,65 ) ); 
	m_comboBoxRight = new wxComboBox( m_audioInfo, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBoxRight->SetToolTip( _("Output Audio Interface") );
	m_comboBoxRight->SetMinSize( wxSize( 65,35 ) );
	
	bSizer3->Add( m_comboBoxRight, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer7->Add( bSizer3, 1, wxEXPAND, 5 );
	
	
	bSizer9->Add( bSizer7, 1, wxEXPAND, 5 );
	
	
	bSizer15->Add( bSizer9, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_gauge1 = new wxGauge( m_audioInfo, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH );
	bSizer5->Add( m_gauge1, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer5, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_slider1 = new wxSlider( m_audioInfo, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_HORIZONTAL|wxSL_SELRANGE|wxSL_TOP );
	bSizer6->Add( m_slider1, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );
	
	
	bSizer10->Add( bSizer6, 1, wxEXPAND, 5 );
	
	
	bSizer15->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_toggleBtn3 = new wxToggleButton( m_audioInfo, wxID_ANY, _("On / Off"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_toggleBtn3, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	
	bSizer13->Add( bSizer12, 1, 0, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_toggleBtn2 = new wxToggleButton( m_audioInfo, wxID_ANY, _("On / Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn2->SetValue( true ); 
	bSizer11->Add( m_toggleBtn2, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 5 );
	
	
	bSizer13->Add( bSizer11, 1, 0, 5 );
	
	
	bSizer14->Add( bSizer13, 1, wxALIGN_BOTTOM|wxALIGN_RIGHT, 5 );
	
	
	bSizer15->Add( bSizer14, 0, wxEXPAND, 5 );
	
	
	bSizer17->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	m_button1 = new wxButton( m_audioInfo, wxID_ANY, _("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button1->SetDefault(); 
	bSizer16->Add( m_button1, 0, 0, 5 );
	
	
	bSizer17->Add( bSizer16, 0, wxALIGN_BOTTOM|wxALIGN_RIGHT, 5 );
	
	
	m_audioInfo->SetSizer( bSizer17 );
	m_audioInfo->Layout();
	bSizer17->Fit( m_audioInfo );
	mainSizer->Add( m_audioInfo, 1, wxEXPAND, 0 );
	
	
	this->SetSizer( mainSizer );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	m_comboBoxLeft->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnComboLeft ), NULL, this );
	m_comboBoxRight->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnComboRight ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_toggleBtn3->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnTogRight ), NULL, this );
	m_toggleBtn2->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnTogLeft ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnExitClick ), NULL, this );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	m_comboBoxLeft->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnComboLeft ), NULL, this );
	m_comboBoxRight->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnComboRight ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrameBase::OnScroll ), NULL, this );
	m_toggleBtn3->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnTogRight ), NULL, this );
	m_toggleBtn2->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnTogLeft ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnExitClick ), NULL, this );
	
}
