#include <iostream>
using namespace std;
int main()
{
	int n, e = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
 
	{
		for (int j = n-1; j > i; j--)
		{
			cout << " ";
		}
		for (int c = 0; c < e; c++)
		{
			cout << "*";
		}
		cout << endl;
		e = e + 2;
 
	}
}
