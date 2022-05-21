#include "../std_lib_facilities.h"

int main()
{
    int num1 = 0;
    int num2 = 0;
    bool test = true;

    while(test){
        cout << "Please enter two ints and press enter: \n";
        cin >> num1 >> num2;
        
        if (cin.fail()){
            test = false;
        }
        else {
            cout << "The numbers are: " << num1 << ' ' << num2 << '\n';
        }
    }
}