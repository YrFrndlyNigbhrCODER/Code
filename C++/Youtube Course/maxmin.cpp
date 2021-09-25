#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxNO = INT_MIN;
    int minNO= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNO = max(maxNO, a[i]);
        minNO = min(minNO, a[i]);
    }
    cout << "MAX: " << maxNO << endl;
    cout << "MIN: " << minNO << endl;
    return 0;
}