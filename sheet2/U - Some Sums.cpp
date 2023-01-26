#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,n,sum=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        int c=i,s=0;
        while(c>0){
            s+=c%10;
            c/=10;
        }
        if(s>=a && s<=b)
            sum+=i;
    }
    cout<<sum<<endl;
}
