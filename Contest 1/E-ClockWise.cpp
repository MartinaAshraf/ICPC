#include <iostream>
using namespace std;

int main()
{
   
    int m;
    cin >> m;

    int initHour = 19;
    int hours = m / 60;
    initHour += hours;
    m %= 60;

    cout << initHour << ':';

    if (m < 10)
        cout << '0' << m;
    else
        cout << m;
}
