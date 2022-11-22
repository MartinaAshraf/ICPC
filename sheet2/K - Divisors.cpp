#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
 
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i  << endl;
		else continue;
	}
}
