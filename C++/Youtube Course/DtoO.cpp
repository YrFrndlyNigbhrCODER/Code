#include<iostream>
using namespace std;
int decimalToOctal(int n)
{
    int ans = 0;
    int i = 1;
    while(n!=0)
    {
        int last = n % 8;
        n = n / 8;
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