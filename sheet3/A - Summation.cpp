#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
 
using namespace std;
int main() {
	int  number_of_elements;
	cin >> number_of_elements;
	long long sum =0;
	for (int i = 0; i < number_of_elements; i++) // for (int i = 1; i <= number_of_elements; i++)
	{
		int numbers;
		cin >> numbers;
		sum += numbers;
	}
	if (sum < 0) {sum *= -1 ;} 
 cout <<sum ;
	
return 0;
 
}
