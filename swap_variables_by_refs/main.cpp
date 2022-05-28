#include "../std_lib_facilities.h"

// This program uses template function to swap values by refs

template <typename T>

void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    double var1 = 31.2;
    double var2 = 64.3;

    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;

    cout << "Swap" << endl;

    Swap(var1, var2);

    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;
}