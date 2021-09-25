#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, count1 = 0, count2 = 0; 
        string s;
        cin >> n >> a >> b;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                count1++;
            }
            else if(s[i]=='1')
            {
                count2++;
            }
        }
        cout << (count1 * a) + (count2 * b) << endl;
    }

    return 0;
}