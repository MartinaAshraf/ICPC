#include <iostream>
using namespace std;
int main()
{
	int counter ,n , m, sum = 0;
	cin >> counter;
	for (int i = 1; i <= counter; i++)
	{
		cin >> n >>m ;
		if (n > m) { swap(n,m); }
		for (int j = n+1 ; j< m ;j++)
		if (j % 2 != 0)
		{
			sum = sum + j;
		}
		cout << sum << endl;
		sum = 0;
    }
 
 
}
