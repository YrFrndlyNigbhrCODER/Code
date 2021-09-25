#include<iostream>
using namespace std;
const int n = 3;
void print(int a[][n],int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(a, 3);
    return 0;
}