#include "../std_lib_facilities.h"

int main()
{
    for (int i = 97; i < 123; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }
    for (int i = 65; i < 91; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }
    for (int i = 48; i < 58; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }
}