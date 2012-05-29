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
    menuFileExit = new wxMenuItem( m_menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('    ') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
    m_menuFile->Append( menuFileExit );

    m_menuBar->Append( m_menuFile, _("&File") );

    this->SetMenuBar( m_menuBar );

    wxBoxSizer* mainSizer;
    mainSizer = new wxBoxSizer( wxVERTICAL );

    m_audioInfo = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    m_audioInfo->SetMinSize( wxSize( 65,65 ) );

    wxBoxSizer* bSizer17;
    bSizer17 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizer151;
    bSizer151 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticBoxSizer* sbSizerLeft;
    sbSizerLeft = new wxStaticBoxSizer( new wxStaticBox( m_audioInfo, wxID_ANY, _("label") ), wxVERTICAL );

    m_listBoxTopLeft = new wxListBox( m_audioInfo, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    sbSizerLeft->Add( m_listBoxTopLeft, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 3 );


    bSizer151->Add( sbSizerLeft, 1, wxEXPAND, 1 );

    wxStaticBoxSizer* sbSizerRight;
    sbSizerRight = new wxStaticBoxSizer( new wxStaticBox( m_audioInfo, wxID_ANY, _("label") ), wxVERTICAL );

    m_textTopRight = new wxTextCtrl( m_audioInfo, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_DONTWRAP|wxTE_MULTILINE );
    m_textTopRight->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVEBORDER ) );

    sbSizerRight->Add( m_textTopRight, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 3 );


    bSizer151->Add( sbSizerRight, 1, wxEXPAND, 1 );


    bSizer17->Add( bSizer151, 1, wxEXPAND, 5 );

    wxBoxSizer* bSizer15;
    bSizer15 = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* bSizer9;
    bSizer9 = new wxBoxSizer( wxVERTICAL );

    m_listBoxMidLeft = new wxListBox( m_audioInfo, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    bSizer9->Add( m_listBoxMidLeft, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


    bSizer15->Add( bSizer9, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 1 );

    wxBoxSizer* bSizer18;
    bSizer18 = new wxBoxSizer( wxVERTICAL );

    m_listBoxMidRight = new wxListBox( m_audioInfo, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    bSizer18->Add( m_listBoxMidRight, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


    bSizer15->Add( bSizer18, 1, wxEXPAND, 5 );


    bSizer17->Add( bSizer15, 1, wxEXPAND, 1 );

    wxBoxSizer* bSizer91;
    bSizer91 = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* bSizer71;
    bSizer71 = new wxBoxSizer( wxHORIZONTAL );

    m_listBoxBottomLeft = new wxListBox( m_audioInfo, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    bSizer71->Add( m_listBoxBottomLeft, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


    bSizer91->Add( bSizer71, 1, wxEXPAND, 5 );

    wxBoxSizer* bSizer31;
    bSizer31 = new wxBoxSizer( wxHORIZONTAL );

    bSizer31->SetMinSize( wxSize( 65,65 ) );
    m_listBoxBottomRight = new wxListBox( m_audioInfo, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    bSizer31->Add( m_listBoxBottomRight, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


    bSizer91->Add( bSizer31, 1, wxEXPAND, 5 );


    bSizer17->Add( bSizer91, 1, wxEXPAND, 1 );

    wxBoxSizer* bSizer14;
    bSizer14 = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* bSizer13;
    bSizer13 = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* bSizer12;
    bSizer12 = new wxBoxSizer( wxVERTICAL );

    m_btnLeft = new wxButton( m_audioInfo, wxID_ANY, _("Ok"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer12->Add( m_btnLeft, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 1 );


    bSizer13->Add( bSizer12, 1, 0, 1 );

    wxBoxSizer* bSizer11;
    bSizer11 = new wxBoxSizer( wxVERTICAL );

    m_btnRight = new wxButton( m_audioInfo, wxID_ANY, _("On / Off"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer11->Add( m_btnRight, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 1 );


    bSizer13->Add( bSizer11, 1, 0, 1 );


    bSizer14->Add( bSizer13, 1, wxALIGN_BOTTOM|wxALIGN_RIGHT, 1 );


    bSizer17->Add( bSizer14, 0, wxEXPAND, 5 );

    wxBoxSizer* bSizer16;
    bSizer16 = new wxBoxSizer( wxVERTICAL );

    m_button1 = new wxButton( m_audioInfo, wxID_ANY, _("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
    m_button1->SetDefault();
    bSizer16->Add( m_button1, 0, 0, 1 );


    bSizer17->Add( bSizer16, 0, wxALIGN_BOTTOM|wxALIGN_RIGHT, 1 );


    m_audioInfo->SetSizer( bSizer17 );
    m_audioInfo->Layout();
    bSizer17->Fit( m_audioInfo );
    mainSizer->Add( m_audioInfo, 1, wxALIGN_CENTER|wxEXPAND, 1 );


    this->SetSizer( mainSizer );
    this->Layout();
    m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );

    this->Centre( wxBOTH );

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
    this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
    m_listBoxTopLeft->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxTopLeftBox ), NULL, this );
    m_listBoxTopLeft->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxTopLeftDClick ), NULL, this );
    m_listBoxMidLeft->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListMidLeftBoxClick ), NULL, this );
    m_listBoxMidLeft->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListMidLeftBoxDClick ), NULL, this );
    m_listBoxMidRight->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListMidRightBoxClick ), NULL, this );
    m_listBoxMidRight->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListMidRightBoxDClick ), NULL, this );
    m_listBoxBottomLeft->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomLeftClick ), NULL, this );
    m_listBoxBottomLeft->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomLeftDClick ), NULL, this );
    m_listBoxBottomRight->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomRIghtClick ), NULL, this );
    m_listBoxBottomRight->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomRIghtDClick ), NULL, this );
    m_btnLeft->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnBtnLeft ), NULL, this );
    m_btnRight->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnBtnRight ), NULL, this );
    m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnExitClick ), NULL, this );
}

MainFrameBase::~MainFrameBase()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
    this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
    m_listBoxTopLeft->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxTopLeftBox ), NULL, this );
    m_listBoxTopLeft->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxTopLeftDClick ), NULL, this );
    m_listBoxMidLeft->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListMidLeftBoxClick ), NULL, this );
    m_listBoxMidLeft->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListMidLeftBoxDClick ), NULL, this );
    m_listBoxMidRight->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListMidRightBoxClick ), NULL, this );
    m_listBoxMidRight->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListMidRightBoxDClick ), NULL, this );
    m_listBoxBottomLeft->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomLeftClick ), NULL, this );
    m_listBoxBottomLeft->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomLeftDClick ), NULL, this );
    m_listBoxBottomRight->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomRIghtClick ), NULL, this );
    m_listBoxBottomRight->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( MainFrameBase::OnListBoxBottomRIghtDClick ), NULL, this );
    m_btnLeft->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnBtnLeft ), NULL, this );
    m_btnRight->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnBtnRight ), NULL, this );
    m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnExitClick ), NULL, this );

}
