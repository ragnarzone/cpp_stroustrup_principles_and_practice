#include "../std_lib_facilities.h"
int main()
{
    const int SIZE = 5;
    int arr[SIZE]{4,55,79,1,4};

    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }

    cout << "=====================" << endl;
    int *pArr = arr;

    cout << "arr\t" << arr << endl;
    cout << "pArr\t" << pArr << endl;

    cout << "=====================" << endl;

    for(int i = 0; i < SIZE; i++){
        cout << *(pArr+i) <<endl;
    }

    cout << "=====================" << endl;

    cout << *(arr+2) << endl;

    cout << "=====================" << endl;

    for(int i = 0; i < SIZE; i++){      // outputs addresses of elements in arr
        cout << (pArr+i) <<endl;
    }

    return 0;
}