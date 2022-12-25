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
