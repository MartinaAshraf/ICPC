#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string x;
    cin >> x;
    if (x == "A") { cout << "<" << endl; }
    else if (x == "S") {
        cout << "v" << endl;
    }
    else if (x == "W") {
        cout << "^" << endl;
    }
    else if (x == "D") {
        cout << ">" << endl;
    }
 
 
}
