#include <iostream>
using namespace std;
int main()
{ int a;char s;int b;char q ;long long c ;
cin >>a>>s>>b>>q>>c;
 
if (s == '+')
{
    if (a+b == c )
        {cout << "Yes" <<endl;}
else cout << a+b;
}
else if (s == '-')
{
    if (a-b == c ) {cout << "Yes" <<endl;}
else cout << a-b;
}
else if (s == '*')
{
    if (a*b == c ) {cout << "Yes" <<endl;}
else cout << a*b;
}
}
