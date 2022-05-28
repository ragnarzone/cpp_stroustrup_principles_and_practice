#include "../std_lib_facilities.h"

// This program initialize values in main() and then passes them to Foo()
// Passing done by means of references

void Foo(int &a, int &b, int &c){
    a = 10;
    b *= 2;
    c -= 100;
}

int main()
{
    int a = 0, b = 4, c = 34;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "Foo" << endl;
    Foo(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}