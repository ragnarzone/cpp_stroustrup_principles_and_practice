#include "../std_lib_facilities.h"

// This program creates and outputs user defined random 2d array

int main()
{ 
    int rows = 0;
    int cols = 0;

    // ask for input of rows and cols
    cout << "Enter rows count: " << endl;
    cin >> rows;

    cout << "Enter cols count: " << endl;
    cin >> cols;
    
    // define 2d array
    int **arr = new int* [rows];

    // define rows in array
    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }
    ///////////////////////////////////////////
     
     // initialize array with random nums
     for(int i = 0; i < rows; i++){
         for(int j = 0; j < cols; j++){
             arr[i][j] = rand() % 20;
         }
     }

    //////////////////////////////////////////
     
     // output
     for(int i = 0; i < rows; i++){
         for(int j = 0; j < cols; j++){
             cout << arr[i][j] << '\t';
         }
         cout << endl;
     }

    //////////////////////////////////////////

    // clean memory
    for (int i = 0; i < rows; i++){
        delete [] arr[i];
    }

    delete[] arr; 
}