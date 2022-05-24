#include "../std_lib_facilities.h"

int main()
{
    double num1 = 0, num2 = 0;
    bool test = true;

    while(test){
        cout << "Please enter two doubles and press enter: \n";
        cin >> num1 >> num2;
        
        if (cin.fail()){
            test = false;
        }
        else {
            cout << "The numbers are: " << num1 << ' ' << num2 << '\n';
            if (num1 > num2){
                cout << "The smaller value is: " << num2 << '\n';
                cout << "The larger value is: " << num1 << '\n';
                if ((num1 - num2) < 0.001){
                    cout << "The numbers are almost equal\n";
                }
            }
            else if(num1 == num2){
                cout << "The numbers are equal\n";
            }
            else{
                cout << "The smaller value is: " << num1 << '\n';
                cout << "The larger value is: " << num2 << '\n';
                if ((num2 - num1) < 0.001){
                    cout << "The numbers are almost equal\n";
                }
            }
        }
    }

    return 0;
}