#include "../std_lib_facilities.h"

int main(){
    cout << "Enter the name of the person you want to write to\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.";
    return 0;
}