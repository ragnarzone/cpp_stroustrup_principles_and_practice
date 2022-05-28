#include "../std_lib_facilities.h"

// This program allocates memory in heap to store dynamicaly defined array

int main()
{
    int size = 0;
    cout << "Enter array size: " << endl;
    cin >> size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << '\t';

        cout << arr + i << endl;
    }

    delete [] arr;
}