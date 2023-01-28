#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int k, s, counter = 0;
	cin >> k >> s; // s= عايزين الارقام اللى مجموعهم 
	              //zero to k بين

	for (int x = 0; x <= k;x++)
	{

		for (int y = 0; y <= k;y++)
		{
			int z = s - x - y; //عشان اصلا s= x+y+z
			
				if ( z >=0&&z<= k) { counter++; }

			
		}

	}
	cout << counter;
	return 0;
}



//اقرأ الحل دا الاول عشان تفهم الحل الصح اللى فوق


/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int k, s, counter = 0;
	cin >> k >> s; // s= عايزين الارقام اللى مجموعهم 
	              //zero to k بين

	for (int x = 0; x <= k;x++)
	{

		for (int y = 0; y <= k;y++)
		{
*/
			for (int z = 0; z <= k; z++)
			{
				if (x + y + z == s) { counter++; }

	/*		}
		}

	}
	cout<< counter ;
	return 0;
}
*/

