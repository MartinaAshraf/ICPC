#include<iostream>
#include<cstring>
 
using namespace std;
int main(){
    char x;
    cin>>x;
    if (x>=97 && x<=122){
            x=x-32;
            cout <<x;}
   else if (x>=65 && x<=90){
        x=x+32;
        cout <<x;}
   
    return 0;}
