#include <iostream>

#include "stonewt.h"
int main()
{
    using std::cout;
    Stonewt incognito = 275;
    Stonewt wolfe(173.6);
    Stonewt taft(27, 3.4);
    cout << "Stone: \n" << "incognito: " << incognito << "wolfe: " << wolfe
         << "taft: " << taft;
    incognito.poundMode();
    wolfe.poundMode();
    taft.poundMode();
    cout << "Float Pounds:\n" << "incognito: " << incognito << "wolfe: " << wolfe
         << "taft: " << taft;
    incognito.intMode();
    wolfe.intMode();
    taft.intMode();
    cout << "Int Pounds:\n" << "incognito: " << incognito << "wolfe: " << wolfe
         << "taft: " << taft;
    cout << "incognito + wolfe = " << incognito + wolfe;
    cout << "wolfe * taft = " << incognito * wolfe;
    cout << "taft - incognito = " << taft - incognito;

    return 0;
}

