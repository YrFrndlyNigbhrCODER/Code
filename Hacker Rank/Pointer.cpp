#include<iostream>
using namespace std;
void update(int *a,int *b)
{
    int x, y;
    x = *a + *b;
    if(*a>=*b)
    {
        y = *a - *b;
    }
    else{
        y = *b - *a;
    }
    *a = x;
    *b = y;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n"
         << b;

    return 0;
}