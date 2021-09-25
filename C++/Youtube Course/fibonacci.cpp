#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1;
    int nxtterm;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        nxtterm = a + b;
        a = b;
        b = nxtterm;
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}