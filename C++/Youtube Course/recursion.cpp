#include<iostream>
using namespace std;
int add(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n + add(n - 1));
}
int exponent(int n, int p)      // 2^(2) = 4 
{
    if(p==0)
    {
        return 1;
    }
    return (n * exponent(n, p - 1));
}
int factorial(int n)    //0! = 1 , 2! = 2, 3! = 6....
{
    if(n==0)
    {
        return 1;
    }
    return (n * factorial(n - 1));
}
int fibonacci(int n)    // nth fibonaaci number   ex 0 1 1 2 3 5 8 13 21......
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    //int p;
    cin >> n;
    //cin >> p;
    //cout << add(n) << endl;
    //cout << exponent(n, p) << endl;
    //cout << factorial(n) << endl;
    cout << fibonacci(n) << endl;
    return 0;
}