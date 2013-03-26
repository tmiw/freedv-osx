#include "main.h"
#include "MainFrame.h"
#include <wx/aboutdlg.h>
#include "dlg_rig_ctrl.h"

MainFrame::MainFrame(wxWindow* parent): MainFrameBaseClass(parent)
{
    wxConfigBase *pConfig = wxConfigBase::Get();
    if(pConfig)
    {
        pConfig->SetRecordDefaults();

        // restore frame position and size
        int x = pConfig->Read(wxT("/MainFrame/top"),       50);
        int y = pConfig->Read(wxT("/MainFrame/left"),      50);
        int w = pConfig->Read(wxT("/MainFrame/width"),     650);
        int h = pConfig->Read(wxT("/MainFrame/height"),    400);

        Move(x, y);
        SetClientSize(w, h);
    }
}

MainFrame::~MainFrame()
{
    int x;
    int y;
    int w;
    int h;

    wxConfigBase *pConfig = wxConfigBase::Get();
    if(pConfig)
    {
        GetClientSize(&w, &h);
        GetPosition(&x, &y);
        //wxLogDebug("x = %d y = %d w = %d h = %d\n", x,y,w,h);
        pConfig->Write(wxT("/MainFrame/top"), (long) x);
        pConfig->Write(wxT("/MainFrame/left"), (long) y);
        pConfig->Write(wxT("/MainFrame/width"), (long) w);
        pConfig->Write(wxT("/MainFrame/height"), (long) h);
    }
    delete wxConfigBase::Set((wxConfigBase *) NULL);
}

void MainFrame::OnExit(wxCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("HAMLib Test"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("Short description goes here"));
    ::wxAboutBox(info);
}

void MainFrame::OnNew(wxCommandEvent& event)
{
}

void MainFrame::OnOpen(wxCommandEvent& event)
{
}

void MainFrame::OnSize(wxSizeEvent& event)
{
}

void MainFrame::OnToolsPrefs(wxCommandEvent& event)
{
    wxUnusedVar(event);
    DlgRigCtrlBase *dlg = new DlgRigCtrlBase(NULL);
    //int rVal = dlg
    dlg->ShowModal();
    delete dlg;
}
