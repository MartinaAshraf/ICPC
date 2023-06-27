#include<iostream>
#include<math.h>
using namespace std;
int main(){
   float x,y;
    cin>> x>> y;
    if(x>0 && y>0){cout<< "Q1";}
    else if(x>0 && y<0){cout<< "Q4";}
    else  if(x<0 && y>0){cout<< "Q2";}
 else if(x<0 && y<0){cout<< "Q3";}
 else  if(x!=0 && y==0){cout<< "Eixo X";}
 else  if(x==0 && y!=0){cout<< "Eixo Y";}
 else {cout<<"Origem";}
 return 0;}
