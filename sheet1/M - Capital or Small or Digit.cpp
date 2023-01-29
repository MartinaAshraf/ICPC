#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char x;
    cin>>x;
    if (x>=97 && x<=122){cout <<"ALPHA\n"<<"IS SMALL\n";}
   else if (x>=65 && x<=90){cout <<"ALPHA\n"<<"IS CAPITAL\n";}
    else {cout <<"IS DIGIT\n";}
    return 0;
}
