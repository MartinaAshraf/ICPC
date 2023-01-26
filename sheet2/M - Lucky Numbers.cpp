#include<iostream>

using namespace std;

int main() {
	int a, b, i, digit, num, counter=0;
	bool check;
	cin >> a >> b;
	for (i = a; i <= b; i++)
	{
		num = i;//So that the value of "i" does not change when we need it in "cout"
		check = 0;

		// Separation of variables فصل المتغيرات 
		while (num != 0) 
		{
			digit = num % 10;// to get digit 
			num /= 10; // to delet this digit from num 
			// اختبار الشرط 
			if (digit != 4 && digit != 7)
			{
				check = 1;
			}
		}
		if (check ==0)
		{
			cout << i << " ";
			counter++;
		}
		
	}
if (counter ==0)
		{
			cout << -1;
		}
}
