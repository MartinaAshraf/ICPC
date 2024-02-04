
#include <iostream>
#include <math.h>
#include<iomanip>
#include <string>
using namespace std;
int main() {
int a,b;
cin >>a;
if( a<10 &&a%2==0){cout <<"EVEN";}
else if ( a<10 &&a%2!=0){cout <<"ODD";}
else if ( a<100 &&(a/10)%2==0){cout <<"EVEN";}
else if ( a<100 &&(a/10)%2!=0){cout <<"ODD";}
else if ( a<1000 &&(a/100)%2==0){cout <<"EVEN";}
else if (a<1000 &&(a/100)%2!=0){cout <<"ODD";}

else if ((a/1000)%2==0){cout <<"EVEN";}
else if ((a/1000)%2!=0){cout <<"ODD";}

    return 0;
}
