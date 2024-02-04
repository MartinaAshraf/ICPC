// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main() {
int A, B ,C ;
cin>> A>>B >>C;
if (C<=B&&C<=A)
{
    cout <<C<<" ";
    if (B<=A)
    {
    cout<<A;
    }
    else 
     cout<<B;
}

else if (B<=C&&B<=A)
{
    cout <<B<<" ";
    if (C<=A)
    {
    cout<<A;
    }
    else 
     cout<<C;
}

else if (A<=C&&A<=B)
{
    cout <<A<<" ";
    if (C<=B)
    {
    cout<<B;
    }
    else 
     cout<<C;
}
else cout << A<<" "<<B;
    return 0;
}












#include<iostream>
#include<cstring>
using namespace std;
int main(){
     int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 > num3)
        {
            cout << num3 << " " << num1 << endl;
        }
        else
        {
            cout << num2 << " " << num1 << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 > num3)
        {
            cout << num3 << " " << num2 << endl;
        }
        else
        {
            cout << num1 << " " << num2 << endl;
        }
    }
    else if (num3 >= num2 && num3 >= num1)
    {
        if (num1 > num2)
        {
            cout << num2 << " " << num3 << endl;
        }
        else
        {
            cout << num1 << " " << num3 << endl;
        }
    }
    return 0;
}
