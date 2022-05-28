#include "../std_lib_facilities.h"

// This program copying one array into another without memory leak

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
    // allocate momory for arrays
    int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

    // fill array with rand nums
    FillArray(firstArray, size);
    FillArray(secondArray, size);

    // output initial
    cout << "First array =\t";
    ShowArray(firstArray, size);
    cout << "Second array =\t";
    ShowArray(secondArray, size);

    // actual copying
    ////////////////////////////////////

    delete [] firstArray;               // clean memory of initial first array

    firstArray = new int[size];         // allocate new memory for first array with size of second array
    for(int i = 0; i < size; i++)       // iterate through first and second array and assign values
    {                                   // from second array to values of first array
        firstArray[i] = secondArray[i];
    }

    ///////////////////////////////////

    // output after copying
    cout << "===================================" << endl;
    cout << "First array =\t";
    ShowArray(firstArray, size);
    cout << "Second array =\t";
    ShowArray(secondArray, size);




    // clean memory
    delete [] firstArray;
    delete [] secondArray;
}