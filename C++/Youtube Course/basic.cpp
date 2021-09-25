#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int savings;
    cin >> savings;

    if(savings>5000)
    {
        cout << "Neha\n";
        if(savings>10000)
        {
            cout << "Road trip with Neha";
        }
        else
        {
            cout << "Shopping with Neha";
        }
        
    }
    else if(savings>2000)
    {
        cout << "Rashmi\n";
    }
    else
    {
        cout << "Friends\n";
    }
    return 0;
}