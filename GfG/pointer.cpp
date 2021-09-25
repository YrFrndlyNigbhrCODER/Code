#include<iostream>
using namespace std;
int main()
{
    /* int r = 3, c = 4;
    int *ptr, count = 0, i;
    ptr = (int *)malloc((r * c)*sizeof(int));
    for (i = 0; i < r * c; i++)
    {
        ptr[i] = i + 1;
        cout << ptr[i]<<" ";
        if((i+1)%c==0)
        {
            cout << endl;
        }
    }
    free(ptr); */
    int n, k = 0;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            k++;
            a[i][j] = k;
            cout << a[i][j] << " ";
        }
    cout << endl;
    }
    return 0;
}



