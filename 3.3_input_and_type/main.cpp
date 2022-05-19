#include "../std_lib_facilities.h"
int main() // C++ programs start by executing the function main
{
    cout << "Please enter your first name and age\n";
    string first_name;  //string variable
    int age;            //integer variable
    cin >> first_name;  //read a string
    cin >> age;         //read an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}