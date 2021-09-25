#include<iostream>
using namespace std;
int main()
{
    int a, b;
    a = 10, b = 20;
    int c = a > b ? a - b : b - a;
    cout << c << endl;
    return 0;
}