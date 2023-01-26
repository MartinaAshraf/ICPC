#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int counter = n * 4  ;
	for (int i = 1; i <= counter; i++)
	{
		
		if (i % 4 != 0)
		{
			cout << i << " ";
		}
		if (i % 4 == 0) { cout << "PUM" << endl; }
    }
 
 
}
