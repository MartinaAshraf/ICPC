#include<iostream>

using namespace std;

int main() {

	int num, i, j, isPrime ;
	cin >>num;
     for (i = 2; i <= num; i++)
	 {
		 isPrime = 0;
		 for (j = 2; j < i; j++)
		 {
			if (i % j == 0)
			{
				isPrime = 1;
				
			}
		}
     if (isPrime == 0 && num!= 1)
			cout << i << " ";
	}

	return 0;
}
