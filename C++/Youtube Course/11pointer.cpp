#include<iostream>
using namespace std;
void increment(int *a)
{
    ++*a;
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}