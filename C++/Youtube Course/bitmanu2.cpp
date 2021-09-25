#include<iostream>
using namespace std;
int uniquenumber(int a[], int size)
{
    int xorsum = 0;
    for (int i = 0; i < size; i++)
        xorsum = xorsum ^ a[i];     //XOR gives 0 if same input
    return xorsum;
}
int main()
{
    int a[] = {1, 2, 3, 7, 1, 2, 3};
    cout << uniquenumber(a, 7) << endl;

    return 0;
}