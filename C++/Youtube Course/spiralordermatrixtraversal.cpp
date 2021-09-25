#include<iostream>
using namespace std;
signed main()
{
    int n, m;
    cin >> n >> m;
    int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }       
    }
    // spiral order print 
    while(row_start * col_start <= n* m)
    {
        //for row start
        if(row_start<=row_end && col_start<=col_end)
        for (int col = col_start; col <= col_end; col++)
        {
            cout << a[row_start][col]<<" ";
        }
        row_start++;
        // for column end
        if(row_start<=row_end && col_start<=col_end)
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][col_end]<<" ";
        }
        col_end--;
        //for row end
        if(row_start<=row_end && col_start<=col_end)
        for (int col = col_end; col >= col_start; col--)
        {
            cout << a[row_end][col]<<" ";
        }
        row_end--;
        // for column start
        if(row_start<=row_end && col_start<=col_end)
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][col_start]<<" ";
        }
        col_start++;
    }
        return 0;
}