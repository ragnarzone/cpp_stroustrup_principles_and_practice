#include "../std_lib_facilities.h"

template <typename T1, typename T2>     // typename comes from C language

T1 Sum(T1 a, T2 b){
    return a + b;
}

int main()
{
    cout << Sum(5, 10) << endl;

    cout << Sum(5.5, 1.2) << endl;

    cout << Sum(5, 10.4) << endl;   // truncation

    return 0;
}