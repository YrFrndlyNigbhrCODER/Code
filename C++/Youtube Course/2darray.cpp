#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag =false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(x== a[i][j])
            {
                cout << i << " " << j;
                flag =true;
            }
        }
        cout << endl;
    }
    if(flag==false)
    {
        cout<<"Not Found!";
    }

        return 0;
}