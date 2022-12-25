#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   
       long long  n, k, a;
    int min = INT_MAX;//a سعر كل هديه
    cin >> n >> k;
    for (int i = 0 ; i <n ; i++){
        cin >> a;
        if (a < min) { min = a; }
       }
    cout << k / min << endl ;
}
