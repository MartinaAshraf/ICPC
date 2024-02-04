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


//sel2
#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main() {
  double A, B ;
  int Floor;
 double Ceil ,Round;
    cin>>A>>B;
   
    if (A!=B){
         Floor =A/B;
     Ceil =Floor +1;
     int m= (A/B)*10;
     if(m%10>=5) 
     Round = Ceil;
     else 
      Round =Floor;
    }
    else Floor = Ceil =Round =1;
cout<<"floor "<<A<<" / "<<B<<" = "<<Floor<<endl<<
"ceil "<<A<<" / "<<B<<" = "<<Ceil<<endl<<
"round "<<A<<" / "<<B<<" = "<<Round;
    return 0;
}
