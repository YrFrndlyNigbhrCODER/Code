#include<iostream>
using namespace std;
int series(int n)
{
    static int i = 1;
    
    if (i == n)
    {
        cout << n;
    }
    else
    {
        cout << i << " ";
        i++;
        series(n);
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    series(n);
    return 0;
}

/* if(n>0)
    {
    cout << n--<<" ";
    series(n);
    }
    return 0; */