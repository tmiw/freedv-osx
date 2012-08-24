//=========================================================================
// Name:          main.cpp
// Purpose:       Implements simple wxWidgets application with GUI
//                 created using wxFormBuilder.
// Author:
// Created:
// Copyright:
// License:       wxWidgets license (www.wxwidgets.org)
//
// Notes:        Note that all GUI creation code is implemented in
//                 gui.cpp source file which is generated by wxFormBuilder.
//=========================================================================
#include "main.h"

// initialize the application
IMPLEMENT_APP(MainApp);

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// application class implementation
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
bool MainApp::OnInit()
{
    SetTopWindow(new MainFrame(NULL));
    GetTopWindow()->Show();
    // true = enter the main loop
    return true;
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// main application frame implementation
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
MainFrame::MainFrame(wxWindow *parent) : MainFrameBase(parent)
{
    m_isPaInitialized = false;
    wxInitAllImageHandlers();
    // Give it an icon
    SetIcon(wxICON("../bitmaps/sample.ico"));

    // Make an image list containing large icons
    m_imageListNormal = new wxImageList(32, 32, true);
    m_imageListSmall = new wxImageList(16, 16, true);

#ifdef __WXMSW__
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/toolchec.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/transparent.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/toolchar.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/tooldata.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/toolgame.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/toolnote.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/tooltime.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/inArrow16x16.ico"), wxBITMAP_TYPE_ICO));
    m_imageListSmall->Add(wxIcon(wxT("bitmaps/outArrow16x16.ico"), wxBITMAP_TYPE_ICO));
#else
    m_imageListNormal->Add(wxIcon( toolbrai_xpm ));
    m_imageListNormal->Add(wxIcon( toolchar_xpm ));
    m_imageListNormal->Add(wxIcon( tooldata_xpm ));
    m_imageListNormal->Add(wxIcon( toolnote_xpm ));
    m_imageListNormal->Add(wxIcon( tooltodo_xpm ));
    m_imageListNormal->Add(wxIcon( toolchec_xpm ));
    m_imageListNormal->Add(wxIcon( toolgame_xpm ));
    m_imageListNormal->Add(wxIcon( tooltime_xpm ));
    m_imageListNormal->Add(wxIcon( toolword_xpm ));
    m_imageListSmall->Add(wxIcon(small1_xpm));
#endif
    if(!m_isPaInitialized)
    {
        if((pa_err = Pa_Initialize()) == paNoError)
        {
            m_isPaInitialized = true;
        }
        else
        {
            wxMessageBox(wxT("Port Audio failed to initialize"), wxT("Pa_Initialize"), wxOK);
            return;
        }
    }
    m_notebook1->SetSelection(0);
    showAPIInfo();
    m_RxInDevices.m_listDevices   = m_listCtrlRxInDevices;
    m_RxInDevices.direction       = AUDIO_IN;
    m_RxInDevices.m_textDevice    = m_textCtrlRxIn;
    m_RxInDevices.m_cbSampleRate  = m_cbSampleRateRxIn;

    m_RxOutDevices.m_listDevices  = m_listCtrlRxOutDevices;
    m_RxOutDevices.direction      = AUDIO_OUT;
    m_RxOutDevices.m_textDevice   = m_textRxOut;
    m_RxOutDevices.m_cbSampleRate = m_cbSampleRateRxOut;

    m_TxInDevices.m_listDevices   = m_listCtrlTxInDevices;
    m_TxInDevices.direction       = AUDIO_IN;
    m_TxInDevices.m_textDevice    = m_textCtrlTxIn;
    m_TxInDevices.m_cbSampleRate  = m_cbSampleRateTxIn;

    m_TxOutDevices.m_listDevices  = m_listCtrlTxOutDevices;
    m_TxOutDevices.direction      = AUDIO_OUT;
    m_TxOutDevices.m_textDevice   = m_textCtrTxOut;
    m_TxOutDevices.m_cbSampleRate = m_cbSampleRateTxOut;

    populateParams(m_RxInDevices);
    populateParams(m_RxOutDevices);
    populateParams(m_TxInDevices);
    populateParams(m_TxOutDevices);
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// ~MainFrame()
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
MainFrame::~MainFrame()
{
}

//-------------------------------------------------------------------------
// OnCloseFrame()
//-------------------------------------------------------------------------
void MainFrame::OnCloseFrame(wxCloseEvent& event)
{
    if(m_isPaInitialized)
    {
        if((pa_err = Pa_Terminate()) == paNoError)
        {
            m_isPaInitialized = false;
        }
        else
        {
            wxMessageBox(wxT("Port Audio failed to Terminate"), wxT("Pa_Terminate"), wxOK);
        }
    }
    Destroy();
}

//-------------------------------------------------------------------------
// OnExitClick()
//-------------------------------------------------------------------------
void MainFrame::OnExitClick(wxCommandEvent& event)
{
    if(m_isPaInitialized)
    {
        if((pa_err = Pa_Terminate()) == paNoError)
        {
            m_isPaInitialized = false;
        }
        else
        {
            wxMessageBox(wxT("Port Audio failed to Terminate"), wxT("Pa_Terminate"), wxOK);
        }
    }
    Destroy();
}

/*
//-------------------------------------------------------------------------
// getSelectedItems()
//-------------------------------------------------------------------------
long *MainFrame::getSelectedItems(wxListCtrl*listCtrl)
{
    long *items[];
    long item = listCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    items[0] = item;
    while ( item != -1 )
    {
        wxLogMessage(wxT("\t%ld (%s)"), item, listCtrl->GetItemText(item).c_str());
        if ( ++shownCount > 10 )
        {
            wxLogMessage(wxT("\t... more selected items snipped..."));
            break;
        }
        item = listCtrl->GetNextItem(item, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    }
} return items;
*/

//-------------------------------------------------------------------------
// OnDeviceSelect()
//-------------------------------------------------------------------------
void MainFrame::OnDeviceSelect( wxListEvent& event )
{
    wxListItem  info;
    long item;
    item = m_listCtrlRxInDevices->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxMessageBox(m_listCtrlRxInDevices->GetItemText(item, 2), wxT("Item"), wxOK);
}

//-------------------------------------------------------------------------
// DisplaySupportedSampleRates()
//-------------------------------------------------------------------------
void MainFrame::DisplaySupportedSampleRates(const PaStreamParameters *inputParameters, const PaStreamParameters *outputParameters)
{
    static double standardSampleRates[] =
    {
        8000.0,     9600.0,
        11025.0,    12000.0,
        16000.0,    22050.0,
        24000.0,    32000.0,
        44100.0,    48000.0,
        88200.0,    96000.0,
        192000.0,   -1          // negative terminated  list
    };
    int i;
    int printCount;
    PaError err;

    printCount = 0;
    for(i=0; standardSampleRates[i] > 0; i++)
    {
        err = Pa_IsFormatSupported(inputParameters, outputParameters, standardSampleRates[i]);
        if(err == paFormatIsSupported)
        {
            if(printCount == 0)
            {
                printf("\t%8.2f", standardSampleRates[i]);
                printCount = 1;
            }
            else if(printCount == 4)
            {
                printf(",\n\t%8.2f", standardSampleRates[i]);
                printCount = 1;
            }
            else
            {
                printf(", %8.2f", standardSampleRates[i]);
                ++printCount;
            }
        }
    }
    if(!printCount)
    {
        printf("None\n");
    }
    else
    {
        printf("\n");
    }
}

//-------------------------------------------------------------------------
// OnRefreshClick()
//-------------------------------------------------------------------------
void MainFrame::OnRefreshClick(wxCommandEvent& event)
{
    m_notebook1->SetSelection(0);
    showAPIInfo();
    populateParams(m_RxInDevices);
    populateParams(m_RxOutDevices);
    populateParams(m_TxInDevices);
    populateParams(m_TxOutDevices);
}

//-------------------------------------------------------------------------
// GetAPIInfo()
//-------------------------------------------------------------------------
void MainFrame::showAPIInfo()
{
    wxString    strval;
    int         apiCount        = 0;
    int         numDevices      = 0;

    strval = Pa_GetVersionText();
    m_textStringVer->SetValue(strval);

    numDevices = Pa_GetVersion();
    strval.Printf(wxT("%d"), numDevices);
    m_textIntVer->SetValue(strval);

    apiCount = Pa_GetHostApiCount();
    strval.Printf(wxT("%d"), apiCount);
    m_textAPICount->SetValue(strval);

    numDevices = Pa_GetDeviceCount();
    strval.Printf(wxT("%d"), numDevices);
    m_textCDevCount->SetValue(strval);
}

//-------------------------------------------------------------------------
// populateParams()
//-------------------------------------------------------------------------
void MainFrame::populateParams(AudioInfoDisplay ai)    //wxListCtrl* ctrl, int in_out)
{
    const       PaDeviceInfo *deviceInfo = NULL;
    int         j                        = 0;
    wxListCtrl* ctrl                     = ai.m_listDevices;
    int         in_out                   = ai.direction;
    //wxTextCtrl* txtCtrl                  = ai.m_textDevice;
    //wxComboBox* cb                       = ai.m_cbSampleRate;
    long        idx;
    int         defaultDisplayed;
    int         numDevices;
    wxListItem  listItem;
    wxString    buf;
    int         devn;

    numDevices = Pa_GetDeviceCount();

    if(ctrl->GetColumnCount() > 0)
    {
        ctrl->ClearAll();
    }
    ctrl->SetImageList(m_imageListSmall, wxIMAGE_LIST_SMALL);

    listItem.SetAlign(wxLIST_FORMAT_CENTRE);
    listItem.SetText(wxT("Sel"));
    idx = ctrl->InsertColumn(0, listItem);
    ctrl->SetColumnWidth(0, 37);

    listItem.SetAlign(wxLIST_FORMAT_CENTRE);
    listItem.SetText(wxT("Dflt"));
    idx = ctrl->InsertColumn(1, listItem);
    ctrl->SetColumnWidth(1, 37);

    listItem.SetAlign(wxLIST_FORMAT_LEFT);
    listItem.SetText(wxT("Device"));
    idx = ctrl->InsertColumn(2, listItem);
    ctrl->SetColumnWidth(2, 190);

    listItem.SetAlign(wxLIST_FORMAT_LEFT);
    listItem.SetText(wxT("API"));
    idx = ctrl->InsertColumn(3, listItem);
    ctrl->SetColumnWidth(3, 190);

    if(in_out == AUDIO_IN)
    {
        listItem.SetAlign(wxLIST_FORMAT_CENTRE);
        listItem.SetText(wxT("# Inputs"));
        idx = ctrl->InsertColumn(4, listItem);
        ctrl->SetColumnWidth(4, 75);
    }
    else if(in_out == AUDIO_OUT)
    {
        listItem.SetAlign(wxLIST_FORMAT_CENTRE);
        listItem.SetText(wxT("# Outputs"));
        idx = ctrl->InsertColumn(4, listItem);
        ctrl->SetColumnWidth(4, 75);
    }

    listItem.SetAlign(wxLIST_FORMAT_CENTRE);
    listItem.SetText(wxT("Min Latency"));
    ctrl->InsertColumn(5, listItem);
    ctrl->SetColumnWidth(5, 100);

    listItem.SetAlign(wxLIST_FORMAT_CENTRE);
    listItem.SetText(wxT("Max Latency"));
    ctrl->InsertColumn(6, listItem);
    ctrl->SetColumnWidth(6, 100);

     for(devn = 0; devn < numDevices; devn++)
    {
        buf.Printf(wxT(""));
        deviceInfo = Pa_GetDeviceInfo(devn);
        if(in_out == AUDIO_IN)
        {
            if(deviceInfo->maxInputChannels > 0)
            {
                idx = ctrl->InsertItem(j, ICON_TRANSPARENT);
                defaultDisplayed = false;
                if(devn == Pa_GetDefaultInputDevice())
                {
                    buf.Printf("->>");
                    ctrl->SetItem(idx, 1, buf);
                    defaultDisplayed = true;
                }
                else if(devn == Pa_GetHostApiInfo(deviceInfo->hostApi)->defaultInputDevice)
                {
                    buf.Printf("-->");
                    ctrl->SetItem(idx, 1, buf);
                    defaultDisplayed = true;
                }
                else
                {
                    buf.Printf("---");
                    ctrl->SetItem(idx, 1, buf);
                }
                buf.Printf(wxT("%s"), deviceInfo->name);
                ctrl->SetItem(idx, 2, buf);

                buf.Printf(wxT("%s"), Pa_GetHostApiInfo(deviceInfo->hostApi)->name);
                ctrl->SetItem(idx, 3, buf);

                buf.Printf(wxT("%i"), deviceInfo->maxInputChannels);
                ctrl->SetItem(idx, 4, buf);

                buf.Printf(wxT("%8.4f"), deviceInfo->defaultLowInputLatency);
                ctrl->SetItem(idx, 5, buf);

                buf.Printf(wxT("%8.4f"), deviceInfo->defaultHighInputLatency);
                ctrl->SetItem(idx, 6, buf);
            }
        }
        else if(in_out == AUDIO_OUT)
        {
            if(deviceInfo->maxOutputChannels > 0)
            {
                idx = ctrl->InsertItem(j, ICON_TRANSPARENT);
                defaultDisplayed = false;
                if(devn == Pa_GetDefaultOutputDevice())
                {
                    buf.Printf("<<-");
                    ctrl->SetItem(idx, 1, buf);
                    defaultDisplayed = true;
                }
                else if(devn == Pa_GetHostApiInfo(deviceInfo->hostApi)->defaultOutputDevice)
                {
                    buf.Printf("<--");
                    ctrl->SetItem(idx, 1, buf);
                    defaultDisplayed = true;
                }
                else
                {
                    buf.Printf("---");
                    ctrl->SetItem(idx, 1, buf);
                }
                buf.Printf(wxT("%s"), deviceInfo->name);
                ctrl->SetItem(idx, 2, buf);

                buf.Printf(wxT("%s"), Pa_GetHostApiInfo(deviceInfo->hostApi)->name);
                ctrl->SetItem(idx, 3, buf);

                buf.Printf(wxT("%i"), deviceInfo->maxOutputChannels);
                ctrl->SetItem(idx, 4, buf);

                buf.Printf(wxT("%8.4f"), deviceInfo->defaultLowOutputLatency);
                ctrl->SetItem(idx, 5, buf);

                buf.Printf(wxT("%8.4f"), deviceInfo->defaultHighOutputLatency);
                ctrl->SetItem(idx, 6, buf);
            }
        }
        j++;
    }
}
