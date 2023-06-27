#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    char s;
    cin >>a >> s >> b;
    if (s=='=' && a==b){cout << "Right" << endl;}
    else if (s=='=' && a!=b){cout << "Wrong" << endl;}
        else if (s!='=' && a==b){cout << "Wrong" << endl;}
            else if (s=='<' && a>b){cout << "Wrong" << endl;}
                else if (s==',<' && a==b){cout << "Wrong" << endl;}
    else if (s=='<' && a<b){cout << "Right" << endl;}
    else if (s=='>' && a>b){cout << "Right" << endl;}
 else if (s=='>' && a<b){cout << "Wrong" << endl;}
else if (s=='>' && a==b){cout << "Wrong" << endl;}
}
