#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b;
cin >>a>>b;
if (a%b==0){cout<<"Multiples";}
else if (b%a==0){cout<<"Multiples";}
else {cout<<"No Multiples";}
return 0;
}
