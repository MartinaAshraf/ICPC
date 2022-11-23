
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
 
using namespace std;
int main() {
	int n , counter = 1;
	cin >> n; 
 
	for (int i = n; i >= counter; i--)
 
	{
 
		for (int j = counter; j <= i; j++)
 
		{
 
			cout << "*";
 
		}
cout << endl;
		
 
	}
}
