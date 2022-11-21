#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int m =0 ;
    int num;
    cin >> num;
        int cheack = num / 2;//اى رقم مش اولى بيقبل القسمه على عدد من جوه نص اعداده 
        for (int i = 2; i <= cheack; i++)
        {
            if (num % i == 0)
            {
                cout << "NO" << endl;
                m = 1;
                break;
            }
        }
           if (m==0) { cout << "YES" << endl; }

}
