#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y;
    cin>> x;
    y=x/1000;
    if (y%2==0){cout << "EVEN";}
    else if (y%2!=0){cout << "ODD";}
    return 0;}
