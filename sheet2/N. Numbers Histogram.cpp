#include <iostream>
using namespace std;
int main()
{
	char symbol;
	cin >> symbol;
	int counter , num ;
	cin >> counter;
	for (int i = 0; i < counter; i++) {
		cin >> num;
		for (int j = 1; j <= num; j++) {
			cout << symbol;
 
		}
		cout << endl;
 
	}
}
