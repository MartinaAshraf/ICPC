#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
    long long  a,b,c,d;
    cin >> a>> b>> c>>d;
    cout << ( (b * log(a) ) > (d * log(c) )  ?  "YES":"NO");
}
