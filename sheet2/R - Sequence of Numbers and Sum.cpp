#include <iostream>
using namespace std;
int main()
{
	int n =1, m =1, sum =0 ;
	while (m > 0 && n> 0){cin >> n>>m;
	
	if (n > 0 && m > 0)
	{
		if (n > m) { swap(n, m); }
		for (int i = n; i <= m; i++)
		{
			cout << i << "  ";
			sum = sum + i;
		}
		cout << "sum =" << sum<<endl;
		sum = 0;
	}
	}
}
