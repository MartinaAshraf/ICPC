#include <iostream>
using namespace std;
 
int main()
{
  float x;
    cin >> x;
   
   if (0.0000<=x && x<=100.0000) 
       //[0,25], (25,50], (50,75], (75,100]
   { if (x<=25.0000)
       cout << "Interval" << " "<<"[0,25]";
   else if (x>25.0000&&x<=50.0000)
       cout << "Interval" << " " << "(25,50]";
   else if (x > 50.0000 && x <= 75.0000)
       cout << "Interval" << " " << "(50,75]";
   else
       cout << "Interval" << " " << "(75,100]";
   }
   else 
      
       cout << "Out of Intervals";
}
