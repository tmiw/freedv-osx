#include <wx/init.h>
#include <wx/string.h>

#include "hamlib/rig.h"

int main( int argc, char** argv )
{
    // initialize wxWidgets
    wxInitializer init;
    wxPrintf( wxT("Hello in wxWidgets World!\n\n") );
    rig_model_t rigModel = RIG_MODEL_DUMMY;
    rig_init(rigModel);
    return 0;
}
