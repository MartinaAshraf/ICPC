#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main() {
    double R , Area;
    cin>>R;
    Area = 3.141592653*pow(R,2);
  cout << setprecision(11)<<Area;
    return 0;
}
