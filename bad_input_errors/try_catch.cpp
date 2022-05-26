#include "../std_lib_facilities.h"

int main()
{
    string path = "myFile.txt";

    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);

    try
    {
        cout << "Trying to open file!" << endl;
        fin.open(path);
        cout << "File successfully opened" << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}