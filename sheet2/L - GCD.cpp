#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
 
using namespace std;
int main() {
	int max;
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		
		for (int i = 1; i <= b; i++)
		{
			if (b % i == 0 && a % i == 0)	{	max = i;}
		}
		cout << max;
 
	}
	if (a < b)
	{swap(b, a);
		for (int i = 1; i <= b; i++)
		{
			if (b % i == 0 && a % i == 0){	max = i;}
		}
		cout << max;
 
	}
	else if (a == b) cout << b;
 
}
