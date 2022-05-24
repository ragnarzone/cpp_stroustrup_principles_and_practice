#include "../std_lib_facilities.h"

int main()
{
    double num = 0;
    bool test = true;
    double largest = 0, smallest = 0;

    while(test){
        cout << "Please enter a double and press enter: \n";
        cin >> num;
        
        if (cin.fail()){
            test = false;
        }
        else {
            cout << "The value entered: " << num << '\n';
            if (largest == 0 || num > largest){
                largest = num;
                cout << "The largest so far: " << largest << '\n';
            }
            if (smallest == 0 || num < smallest){
                smallest = num;
                cout << "The smallest so far: " << smallest << '\n';
            }
        }
    }

    return 0;
}