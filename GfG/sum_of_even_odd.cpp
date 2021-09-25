#include<iostream>
using namespace std;
int main()
{
    unsigned long int n;
    int d, count1 = 0, count2 = 0;
    cin >> n;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        if((d%2)==0)
        {
            count1 += d;
        }
        else
        {
            count2 += d;
        }
    }
    cout << count1 << "," << count2 << endl;
    return 0;
}