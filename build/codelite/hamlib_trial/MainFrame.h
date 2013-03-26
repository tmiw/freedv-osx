#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"

class MainFrame : public MainFrameBaseClass
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
protected:
    virtual void OnToolsPrefs(wxCommandEvent& event);
    virtual void OnNew(wxCommandEvent& event);
    virtual void OnOpen(wxCommandEvent& event);
    virtual void OnSize(wxSizeEvent& event);
};
#endif // MAINFRAME_H
