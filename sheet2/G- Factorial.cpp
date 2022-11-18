#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int counter;
    long long factorial = 1;//مضروب 20 ب حاجه * 10 اس 18 
    cin >> counter;// عدد الاعداد اللى هيدخلها
    for (int i =1; i <= counter; i++)
    {
        int n;
        cin >> n; 
        for (int j = 1; j <= n; j++)
        {
            factorial *= j;
        }
        cout << factorial << endl;
        factorial = 1;//عشان يبدأ فكل مره من 1
    }

}
