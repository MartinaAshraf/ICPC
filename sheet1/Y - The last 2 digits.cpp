#include <iostream>
using namespace std;
 
int main()
{
    long long a, b, c, d, Multiplication;
    cin >> a >> b >> c>>d;
    Multiplication = ((a%100) *( b%100) *( c%100) * (d%100));
 Multiplication= Multiplication%100;
   if (Multiplication < 10) 
   { 
       cout << 0<< Multiplication;
   }
   else 
      
    cout << Multiplication;
}
