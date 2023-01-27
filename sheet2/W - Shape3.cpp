   *
  ***
 *****
*******
*******
 *****
  ***
   *

#include <iostream>
using namespace std;
int main()
{
	int lines;
	cin >> lines;
  
  /*
  
   *
  ***
 *****
*******

*/
	int spaces = lines - 1;
	for (int i = 1; i <= lines; i++) //lines
  {
		for (int i = 1; i <= spaces; i++) //spaces
		{
			cout << " ";
		}
		for (int x = 1; x < i *2; x++) { //* عدد فردي
			cout << "*";
		}
		cout << endl;
		
		spaces--;
	}
 
  
  
  /*
  
  *******
   *****
    ***
     *
   
  */
  
	 spaces = 1;
	
		 for (int i = lines; i >= 1; i--)//lines
     {
			 for (int z = 1; z < spaces; z++)//spaces
         
			 {
				 cout << " ";
			 }
			 for (int x = i * 2; x > 1; x--) {//* عدد فردي
				 cout << "*";
			 }
			 cout << endl;
 
			 spaces++;
		 }
}
