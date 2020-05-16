#include "GUI/Sub/pMainMenu.h"
#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit() {
	    pMainMenu *mainWindow = new pMainMenu(NULL);
        mainWindow->Show();
        return true;
    }
};



wxIMPLEMENT_APP_NO_MAIN(MyApp);

int main(int argc, char** argv) {
    
	wxEntry(argc, argv);
    wxEntryCleanup();
    return 0;
}