#include "MainDialog.h"

PTTDialog::PTTDialog(wxWindow* parent): PTTDialogBaseClass(parent)
{
}

PTTDialog::~PTTDialog()
{
}

void PTTDialog::DTRVPlusClicked(wxCommandEvent& event)
{
    wxMessageBox(wxT("DTRVPlusClicked"));
}

void PTTDialog::PTTAudioClick(wxCommandEvent& event)
{
    wxMessageBox(wxT("PTTAudioClick"));
}

void PTTDialog::PTTPortSlelcted(wxCommandEvent& event)
{
    wxMessageBox(wxT("PTTPortSlelcted"));
}

void PTTDialog::PTTUseSerialClicked(wxCommandEvent& event)
{
    wxMessageBox(wxT("PTTUseSerialClicked"));
}

void PTTDialog::RTSVPlusClicked(wxCommandEvent& event)
{
    wxMessageBox(wxT("RTSVPlusClicked"));
}

void PTTDialog::UseDTRCliched(wxCommandEvent& event)
{
    wxMessageBox(wxT("UseDTRCliched"));
}

void PTTDialog::UseRTSClicked(wxCommandEvent& event)
{
    wxMessageBox(wxT("UseRTSClicked"));
}

void PTTDialog::OnApply(wxCommandEvent& event)
{
    wxMessageBox(wxT("OnApply"));
}

void PTTDialog::OnCancel(wxCommandEvent& event)
{
    wxMessageBox(wxT("OnCancel"));
}

void PTTDialog::OnOK(wxCommandEvent& event)
{
    wxMessageBox(wxT("OnOK"));
}
void PTTDialog::OnInitDialog(wxInitDialogEvent& event)
{
}
