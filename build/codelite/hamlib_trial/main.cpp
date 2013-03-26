#include "main.h"
#include "MainFrame.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit()
{
    // Add the common image handlers
    wxImage::AddHandler( new wxPNGHandler );
    wxImage::AddHandler( new wxJPEGHandler );

    SetVendorName(wxT("CODEC2-Project"));
    SetAppName(wxT("Hamlib test"));

    wxConfig *pConfig = new wxConfig();
    wxFileConfig *pFConfig = new wxFileConfig(wxT("visiWidgits"), wxT("WWR Development"), wxT("visiWidgits.conf"), wxT("visiWidgits.conf"),  wxCONFIG_USE_LOCAL_FILE | wxCONFIG_USE_RELATIVE_PATH);
    pConfig->Set(pFConfig);
    pConfig->SetRecordDefaults();


    MainFrame *mainFrame = new MainFrame(NULL);
    SetTopWindow(mainFrame);
    return GetTopWindow()->Show();
}
