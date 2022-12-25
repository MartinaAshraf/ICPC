#include<iostream>
using namespace std;
int main() {
	int a,b,ans=0;
	char a1;
	cin>>a1>>b;
	a=a1-'a'+1;
	if((a - 2) >= 1 && (b - 1) >= 1)ans++;
	if((a - 2) >= 1 && (b + 1) <= 8)ans++;
	if((a + 2) <= 8 && (b + 1) <= 8)ans++;
	if((a + 2) <= 8 && (b - 1) >= 1)ans++;
	if((b - 2) >= 1 && (a - 1) >= 1)ans++;
	if((b - 2) >= 1 && (a + 1) <= 8)ans++;
	if((b + 2) <= 8 && (a + 1) <= 8)ans++;
	if((b + 2) <= 8 && (a - 1) >= 1)ans++;
	cout<<ans<<endl;
	return 0;
}

//selution 2 

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   char c;
   cin>>c;
   int n;
   cin>>n;
   if(n==1||n==8){
    if(c=='a'||c=='h')
        cout<<2<<'\n';
    else if(c=='b'||c=='g')
        cout<<3<<'\n';
    else
        cout<<4<<'\n';
   }
   else if(n==2||n==7){
    if(c=='a'||c=='h')
        cout<<3<<'\n';
    else if(c=='b'||c=='g')
        cout<<4<<'\n';
    else
        cout<<6<<'\n';
   }
   else{
        if(c=='a'||c=='h')
        cout<<4<<'\n';
   else if(c=='b'||c=='g')
    cout<<6<<'\n';
    else
    cout<<8<<'\n';
   }
   return 0;
}


//anther selution



#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
 
int solution1()
{
    string str;
    cin >> str;
    char chr = str[0];
    int pos = str[1] - '0';
    if (str == "h8" || str == "h1" || str == "a8" || str == "a1")
    {
        cout << 2;
        return 0;
    }
 
    if (str == "h2" || str == "h7" || str == "a2" || str == "a7" || str == "b8" || str == "b1" || str == "g8" || str == "g1")
    {
        cout << 3;
        return 0;
    }
 
    if (((chr >= 'c' && chr <= 'f') && (pos == 1 || pos == 8)) ||
        ((chr == 'h' || chr == 'a') && (pos >= 3 && pos <= 6)) ||
        (str == "b2" || str == "g2" || str == "b7" || str == "g7"))
    {
        cout << 4;
        return 0;
    }
 
    if (((chr >= 'c' && chr <= 'f') && (pos == 2 || pos == 7)) ||
        ((chr == 'b' || chr == 'g') && (pos >= 3 && pos <= 6)))
    {
        cout << 6;
        return 0;
    }
    if (chr >= 'c' && chr <= 'f' && pos >= 3 && pos <= 6)
    {
        cout << 8;
        return 0;
    }
}
