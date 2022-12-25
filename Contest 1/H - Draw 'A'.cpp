#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    int size;
    cin >> size;
    int sideSpace = size - 1;
    int innerSpace = -1;
 
    for (int i = 1; i <= size; i++)
    {
 
        for (int s = 1; s <= sideSpace; s++) // side space
            cout << " ";
 
        if (i == 1)
            cout << "^";
        else
        {
            cout << "/";
            for (int x = 1; x <= innerSpace; x++)
            {
                if (i == (size / 2) + 1)
                    cout << "-";
                else
                    cout << " ";
            }
 
            cout << "\\";
        }
 
        cout << endl;
        sideSpace--;
        innerSpace += 2;
    }
}
