#include "../std_lib_facilities.h"

int Fact(int N){
    if (N == 0)
        return 1;
    if (N == 1)
        return 1;

    return N * Fact(N - 1);
}

int main()
{
    cout << Fact(5) << endl;

    return 0;
}