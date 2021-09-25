#include<iostream>
using namespace std;

int main()
{
    /* int n;
    cin >> n;
    char a[n+1];
    cin >> a;
    bool check = true;
    for (int i = 0; i < n/2; i++)
    if(a[i]!=a[n-1-i])
    {
        check = false;
        break;
    }
    if(check)
        cout << "Yes" << endl;
    else
        cout << "No"; */
    // Largest Word in a sentnce
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();
    int i = 0;
    int current_length = 0, max = 0;
    while(1)
    {
        if(a[i]==' '|| a[i]=='\0')
        {
            if(current_length>max)
            {
                 max = current_length;
            }
            current_length = 0;
        }
        else
            current_length++;
    if(a[i]=='\0')
        break;
    i++;
    }
    cout << max<<endl;
    return 0;
}