#include<iostream>
using namespace std;
int main()
{
    int n, i = 1, rem = 0, ans = 0;
    cin >> n;
    while(n>0)
    {
        rem = n % 2;
        n = n / 2;
        ans += rem * i;
        i *=10;
    }
    cout << ans << endl;
    
    return 0;
}