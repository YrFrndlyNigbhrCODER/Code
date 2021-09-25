// Rat in a Maze
#include<iostream>
using namespace std;
bool isSafe(int **a, int x, int y, int n)
{
    if(x<n && y<n && a[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratmove(int **a, int x, int y, int n, int ** solA)
{
    if(x == n-1 && y == n-1)
    {
        solA[x][y] = 1;
        return true;
    }
    if(isSafe(a,x,y,n))
    {
        solA[x][y] = 1;
        if(ratmove(a,x+1,y,n,solA))
        {
            return true;
        }
        if(ratmove(a,x,y+1,n,solA))
        {
            return true;
        }
        solA[x][y] = 0;      // Back traking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    int **solA = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solA[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solA[i][j] = 0;
        }
    }
    if(ratmove(a,0,0,n,solA))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solA[i][j] << " ";
            }
            cout << endl;
        }
    }
        return 0;
}