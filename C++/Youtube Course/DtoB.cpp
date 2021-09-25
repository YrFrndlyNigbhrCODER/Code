#include<iostream>
using namespace std;
int decimalToOctal(int n)
{
    int ans = 0;
    int i = 1;
    int x = 1;
    while(n!=0)
    {
        int last = n % 2;
        n = n / 2;
        ans = ans + last * i;
        i = i * 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToOctal(n) << endl;
    return 0;
}