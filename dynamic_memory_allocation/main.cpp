#include "../std_lib_facilities.h"

int main()
{
    int *pa = new int;  // give me 4 bytes in dynamic memory
    *pa = 10;
    cout << *pa << endl;
    delete pa;          // delete this 4 bytes

    pa = NULL;          // reffer our pointer to 0 in memory
    // pa = nullptr;    // nullptr added in C++ 11std
                        // first delete data and then clean pointer with nullptr

    if (pa != NULL){
        cout << pa << endl;
    }
    delete pa;
}