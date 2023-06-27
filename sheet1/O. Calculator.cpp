//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    char o;
    int x,y;
    cin >>x>>o>>y;
    if (o=='+'){cout<<x+y;}
   else if (o=='-'){cout<<x-y;}
  else  if (o=='*'){cout<<x*y;}
  else  if (o=='/'){cout<<x/y;}
  return 0;}
