#include <iostream>
using namespace std;
int main()
{long long c ;
cin >>c;
int year = c /365;
int month= (c-(year *365))/30;
int day = (c-(year *365)) -(month * 30);
cout <<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days";
 
}
