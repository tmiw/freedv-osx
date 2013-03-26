//==========================================================================
// Name:            main.h
//
// Purpose:         Inclusions and constants for the entire visiWidgets program.
// Created:         Mar. 01, 2013
// Authors:         David Witten
//
// License:
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, see <http://www.gnu.org/licenses/>.
//
//==========================================================================
#ifndef __HAMLIBTRIAL_MAIN__
#define __HAMLIBTRIAL_MAIN__

#include <wx/wx.h>
#include <wx/aui/framemanager.h>
#include <wx/app.h>
#include <wx/event.h>
#include "wx/file.h"
#include "wx/filename.h"
#include "wx/config.h"
#include <wx/fileconf.h>
#include <wx/image.h>

#include "MainFrame.h"

#include "rig.h"
#include "rig_dll.h"
#include "riglist.h"
#include "rotator.h"
#include "rotlist.h"

#if defined(__WINDOWS__)
#undef wxUSE_CONFIG_NATIVE
#endif

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// Class MainApp
//
// @class $(Name)
// @author $(User)
// @date $(Date)
// @file $(CurrentFileName).$(CurrentFileExt)
// @brief
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
// Define the MainApp
class MainApp : public wxApp
{
public:
    MainApp() {}
    virtual ~MainApp() {}

    virtual bool OnInit();
};

DECLARE_APP(MainApp)
//IMPLEMENT_APP(MainApp)

#endif //__HAMLIBTRIAL_MAIN__
