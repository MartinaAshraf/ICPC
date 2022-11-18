#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    long long a, b, sum = 0, n;
        long long x =1;
    cin >> a >> b;
    sum = a + b;
    n = a - b;
    x = a * b;
    if (sum > n && sum > x) { cout << sum << endl; }
    else  if (n > sum && n > x) { cout << n << endl; }
    else  if (x > n && x > sum) { cout << x << endl;
    }
    else {cout  << x << endl;}



}
