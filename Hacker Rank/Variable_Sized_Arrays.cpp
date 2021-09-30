#include<iostream>
using namespace std;
int main()
{
    int n, queries;
    cin >> n >> queries;
    int **total = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int a; // number of element in 1st array
        cin >> a;
        int *b = new int[a];
        for (int j = 0; j < a; j++)
        {
            int value;
            cin >> value;
            b[j] = value;
        }
        *(total + i) = b;
    }
for(int i=0;i<queries;i++) 
{
  int r,s;
  cin >> r >> s;
  cout << total[r][s] << endl;
}
return 0;
}
