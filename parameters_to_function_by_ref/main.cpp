#include "../std_lib_facilities.h"

// This porgram shows difference between references pointers and simple value passing

void Foo(int a){    // receiving copy of value and change it locally
    a = 1;
}

void Foo2(int &a){  // receiving ref to value and change it globally
    a = 2;
}

void Foo3(int *a){  // receiving pointer to value and change it globally
    *a = 3;
}

int main()
{
    int value = 5;
    cout << "value = " << value << endl << endl;

    cout << "Foo = " << endl;
    Foo(value);
    cout << "value = " << value << endl << endl;

    cout << "Foo2 = " << endl;
    Foo2(value);
    cout << "value = " << value << endl << endl;

    cout << "Foo3 = " << endl;
    Foo3(&value);
    cout << "value = " << value << endl << endl;

    return 0;
}