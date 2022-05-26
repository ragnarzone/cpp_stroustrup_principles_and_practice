#include "../std_lib_facilities.h"

int main()
{
    double sum = 0;
    double high_temp = -1000;   // initialize to impossibly low
    double low_temp = 1000;     // initialize to impossibly high
    int no_of_temps = 0;

    for(double temp; cin >> temp; ){    // read temp
        ++no_of_temps;                  // count temperatures
        sum += temp;                    // compute sum
        if(temp>high_temp) high_temp = temp;    // find high
        if(temp<low_temp) low_temp = temp;      // find low
    }

    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    cout << "Average temperature: " << sum/no_of_temps << endl;
    
    return 0;
}