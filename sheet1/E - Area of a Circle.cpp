#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
 
double R,Area;
    cin>> R;
    Area=3.141592653*R*R;
    cout << fixed << setprecision(9);
    cout <<Area<< endl;
 
    return 0;
}
