#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num;
    cin >> num;
    int ans = fact(num);
    cout << ans << endl;
    return 0;
}