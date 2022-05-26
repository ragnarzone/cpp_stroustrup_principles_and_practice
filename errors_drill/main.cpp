#include "../std_lib_facilities.h"

int main()
{
    try{
        
        // cout << "Success!\n";
        // cout << "Success!\n";
        // cout << "Success!" << "\n";
        // cout << "Success!" << '\n';
        // string res = "some string"; vector<string> v(10); v[5] = res; cout << "Success!\n";
        // vector<int> v(10); v[5] = 7; if (v[5]=7) cout << "Success!\n";
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
        // string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
        // string s = "ape"; if (s!="fool") cout << "Success!\n";
        string s = "ape"; if (s!="fool") cout << "Success!\n";



        keep_window_open();
        return 0;
    }
    catch(exception& e){
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}