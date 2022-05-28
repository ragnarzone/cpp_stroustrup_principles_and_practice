#include "../std_lib_facilities.h"

// This program shows how reload of function works

int Sum(int a, int b){
    return a + b;
}

double Sum(double a, double b){
    return a + b;
}

int Sum(int a, int b, int c){
    a++;                              // realization of function also can be changed
    return a + b + c;
}

int main()
{
    cout << Sum(5, 6) << endl;

    cout << Sum(4.1, 1.2) << endl;

    cout << Sum(2, 1, 5) << endl;

    return 0;
}