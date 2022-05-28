#include "../std_lib_facilities.h"

// This program provides two functions:
// FillArray() and ShowArray()

// Function which fills array with random numbers
void FillArray(int* const arr, const int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

// Function which shows given array
void ShowArray(const int* const arr, const int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int main()
{ 
    
}