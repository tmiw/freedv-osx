#ifndef PTTDialog_H
#define PTTDialog_H
#include <wx/wx.h>
#include "wxcrafter.h"

class PTTDialog : public PTTDialogBaseClass
{
public:
    PTTDialog(wxWindow* parent);
    virtual ~PTTDialog();
protected:
    virtual void OnInitDialog(wxInitDialogEvent& event);
    wxCheckBox* m_ckPTTRtChan;
    wxListBox* m_listCtrlPorts;
    wxCheckBox* m_ckUseSerialPTT;
    wxRadioButton* m_rbUseDTR;
    wxCheckBox* m_ckRTSPos;
    wxRadioButton* m_rbUseRTS;
    wxCheckBox* m_ckDTRPos;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;
    wxButton* m_buttonApply;

    void PTTAudioClick(wxCommandEvent& event);
    void PTTPortSlelcted(wxCommandEvent& event);
    void PTTUseSerialClicked(wxCommandEvent& event);
    void UseDTRCliched(wxCommandEvent& event);
    void DTRVPlusClicked(wxCommandEvent& event);
    void UseRTSClicked(wxCommandEvent& event);
    void RTSVPlusClicked(wxCommandEvent& event);

    virtual void OnApply(wxCommandEvent& event);
    virtual void OnCancel(wxCommandEvent& event);
    virtual void OnOK(wxCommandEvent& event);

    void ExchangeData(int inout);
    void populatePortList(void);
};
#endif // PTTDialog_H
