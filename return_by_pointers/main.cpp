#include "../std_lib_facilities.h"

void Foo(int *pa, int *pb, int *pc){
    (*pa) = 555;

    (*pb)++;

    (*pc) = -20;
}

int main()
{
    int a = 0, b = 0, c = 1;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "foo" << endl;

    Foo(&a, &b, &c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}