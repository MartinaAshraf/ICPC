#include <iostream>
using namespace std;
 
int main()
{ int n ,max=0;
int conter ;
cin >> conter;
for (int i=1 ; i<=conter  ;i++)
{
  cin >>n;
  if (i==1){max = n ;}
if (n>max){max = n;}
}
cout <<max<<"\n";
}
