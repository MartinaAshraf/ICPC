#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int counter, reminder;

	long long num;
	cin >> counter;
	for (int i = 0; i < counter; i++) {
		cin >> num;
		int  p = 0, sum = 0; //لازم يتعرفوا هنا عشان عند كل رقم جديد يبدأ من 0
		while (num > 0)
		{
			reminder = num % 2;
			num = num / 2;
			if (reminder == 1 ) { 
				sum += pow(2, p);
				p++;
			}
		
		}
		cout << sum<<endl;
	
	}
	return 0;
}
