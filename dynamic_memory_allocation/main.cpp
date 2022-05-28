#include "../std_lib_facilities.h"

int main()
{
    int *pa = new int;  // give me 4 bytes in dynamic memory
    *pa = 10;
    cout << *pa << endl;
    delete pa;          // delete this 4 bytes
}