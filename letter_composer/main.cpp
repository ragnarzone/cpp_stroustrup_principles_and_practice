#include "../std_lib_facilities.h"

int main()
{
    //Declare variables
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age;

    //Prompt user for name of addressee
    cout << "Enter the name of the person you want to write to\n";
    cin >> first_name;

    //Prompt user for name of friend
    cout << "Enter the name of another friend\n";
    cin >> friend_name;

    //Prompt user for sex of friend
    cout << "Enter the sex of friend (m or f)\n";
    cin >> friend_sex;

    //Prompt user to enter their age
    cout << "Enter your age\n";
    cin >> age;

    //Produce the output
    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.\n";
    cout << "   Let's meet at 10am in the park near your house!\n";
    cout << "   Have you seen " << friend_name << " lately?\n";

    // If friend male or female different output
    if(friend_sex == 'm')
        cout << "   If you see " << friend_name << " please ask him to call me.\n";
    if(friend_sex == 'f')
        cout << "   If you see " << friend_name << " please ask her to call me.\n";

    // Check for age correctness
    if(age>0 && age<110)
        cout << "   I hear you just had a birthday and you are " << age << " years old.\n";
    else
        simple_error("you're kidding!");

    // Different output for different age
    if(age<12)
        cout << "   Next year you will be " << age+1 << ".\n";
    if(age==17)
        cout << "   Next year you will be able to vote.\n";
    if(age>70)
        cout << "   I hope you are enjoying retirement.\n";

    // Signature
    cout << "Yours sincerely,\n\n\n" << "Dmitrii Chernyshov";
}