#include <iostream>
using namespace std;
 
int main()
{
long long m,n ,c,a,unhappy;
 
cin>> n>>m;
c=n/m;
a=n%m;
unhappy =(c+1)*a;
cout <<unhappy;
}
