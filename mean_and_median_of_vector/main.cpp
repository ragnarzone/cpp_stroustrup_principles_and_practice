#include "../std_lib_facilities.h"

// compute mean and median temperatures
int main()
{
    vector<double> temps;           //temperatures
    for (double temp; cin>>temp; )  //read into temp
        temps.push_back(temp);      //put tempinto vector

    // compute mean temperature
    double sum;
    for (double x : temps) sum+=x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature
    sort(temps);                    // sort temperatures
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}