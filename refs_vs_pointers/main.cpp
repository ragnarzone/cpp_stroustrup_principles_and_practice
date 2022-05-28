#include "../std_lib_facilities.h"

// references store address to object as pointers do
// but when we access objects by references we receive value
// in comparison to pointers where we receive address
// to get value by pointers we have to use * to pointer variable
int main()
{
    int a = 5;

    int *pa = &a;

    int &aref = *pa;

    int *ppa = &aref;

    cout << "a\t" << a << endl;
    *ppa = 12;
    cout << "a\t" << a << endl;

    return 0;
}