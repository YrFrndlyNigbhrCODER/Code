#include<iostream>
using namespace std;

int main()
{
    int p=0;
    for(int i = 0; i < 100; i++)
    {
        if(i%3==0)
        {
            p++;
            continue;
        }
        cout<<i<<endl;
    }
    cout<<"Total Divisible Number "<<p;
    return 0;
}