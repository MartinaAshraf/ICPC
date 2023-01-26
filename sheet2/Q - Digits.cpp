 
#include <iostream>
using namespace std;
int main()
{
	int num, counter  ;
	cin >> counter;
	for (int i = 1; i <= counter; i++)
	{
		cin >> num;
		if (num == 0) { cout << num ; }
		while (num >0) {
			int r = num % 10;
			num = num / 10;
			cout << r << " ";
		}
		cout<<endl;
		
	}
 
}
