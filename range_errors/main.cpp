#include "../std_lib_facilities.h"

int main()
{
    try {
        vector<int> v;
        for(int i; cin>>i; )
            v.push_back(i);

        for(int i = 0; i<=v.size(); ++i)                    // here is mistake with range
            cout << "v[" << i << "] == " << v[i] << '\n';   // to improve - <= change to <
    } catch(out_of_range) {
        cerr << "Oops! Range error\n";
        return 1;
    } catch(...) {
        cerr << "Exception: something went wrong\n";
        return 2;
    }

    return 0;
}