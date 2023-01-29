#include<iostream>
#include<math.h>
using namespace std;
int main(){
float a,b;
cin >>a>>b;
double c=a/b;
cout << "floor "<<a<<" / "<<b<<" = "<<floor(c)<<endl;
cout << "ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<endl;
cout << "round "<<a<<" / "<<b<<" = "<<round(c)<<endl;
return 0;
}
