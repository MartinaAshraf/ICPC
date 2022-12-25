#include <iostream>
using namespace std;

int main()
{
   
 
    long long num, t;
    cin >> num >> t;
 
    while (t--)
    {
        int digit = num % 10;
 
        if (digit == 0)
            num /= 10;
        else
            num--;
    }
    cout << num;
}
