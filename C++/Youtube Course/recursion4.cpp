#include<iostream>
using namespace std;
int firstocc(int a[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return firstocc(a, n, i + 1, key);
}
int lastocc(int a[], int n, int i, int key)
{
    if (i == 0)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return lastocc(a, n, i-1, key);
}
int main()
{
    int a[] = {1, 2, 4, 3, 2, 5, 2, 8};
    cout << firstocc(a, 8, 0, 2) << endl;
    cout << lastocc(a, 8, 8, 8) << endl;    // to find the last occurence set position to last index and 
    return 0;                               // decrease by one till it reach 0
}