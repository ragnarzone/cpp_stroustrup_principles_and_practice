#include "../std_lib_facilities.h"

int main()
{
    double d = 0;
    cin >> d;
    if (cin) {
        cout << d << endl;
    }
    else {
        cout << "Wrong input" << endl;
    }

    return 0;
}