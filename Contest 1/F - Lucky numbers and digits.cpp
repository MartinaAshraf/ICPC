#include<iostream>
#include<cstring>
using namespace std;
int main()
{  int t;
    cin >> t;
    while (t--) {
    long long a, b, sumdigit = 0;
    cin >> a >> b; 
    if (a > b) swap(a, b);
        for (long long i = a; i <= b; i++) {
            long long num = i;
            int is_lucky = 1;
            while (num != 0) {
                int mod = num % 10;
                if (mod != 7 && mod != 4) {
                    is_lucky = 0;
                    break;
                }
                num /= 10;
            }
            num = i;
            if (is_lucky == 1) {
                while (num != 0) {
                    int mod = num % 10;
                    sumdigit += mod;
                    num /= 10;
                }
            }
        }
        cout << sumdigit << endl;
    }
        return 0;
    }
 
