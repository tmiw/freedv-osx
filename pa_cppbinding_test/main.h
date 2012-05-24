/*********************************************************************
 * Name:          main.h
 * Purpose:       Declares simple wxWidgets application with GUI
 *                 created using wxFormBuilder.
 * Author:
 * Created:
 * Copyright:
 * License:       wxWidgets license (www.wxwidgets.org)
 *
 * Notes:        Note that all GUI creation code is declared in
 *                 gui.h source file which is generated by wxFormBuilder.
 *********************************************************************/
#ifndef __main__
#define __main__

// main wxWidgets header file
#include <wx/wx.h>
#include <portaudio.h>
#include "portaudiocpp/PortAudioCpp.hxx"
#ifdef WIN32
#include "../extern/include/portaudiocpp/AsioDeviceAdapter.hxx"
#endif

// gui classes generated by wxFormBuilder
#include "gui.h"

////////////////////////////////////////////////////////////////////////////////
// application class declaration
////////////////////////////////////////////////////////////////////////////////

class MainApp : public wxApp
{
    public:
        virtual bool OnInit();
};

// declare global static function wxGetApp()
DECLARE_APP(MainApp)

////////////////////////////////////////////////////////////////////////////////
// main application frame declaration
////////////////////////////////////////////////////////////////////////////////

class MainFrame : public MainFrameBase
{
    public:
        MainFrame(wxWindow *parent);
        virtual ~MainFrame();

    protected:
        // protected event handlers
        virtual void OnCloseFrame(wxCloseEvent& event);
        virtual void OnExitClick(wxCommandEvent& event);
        void populateStandardSampleRates(
                wxListBox* target,
                const portaudio::DirectionSpecificStreamParameters &inputParameters,
                const portaudio::DirectionSpecificStreamParameters &outputParameters);
        int populateAudioInfo();
        void OnComboLeft( wxCommandEvent& event );
        void OnComboRight( wxCommandEvent& event );
        void OnScroll( wxScrollEvent& event );
        void OnBtnLeft( wxCommandEvent& event );
        void OnBtnRight( wxCommandEvent& event );
};

#endif //__main__
