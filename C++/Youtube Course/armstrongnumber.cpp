#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int number = n;
    while(n>0)
    {
        int l = n % 10;
        sum += l * l * l;
        n = n / 10;
    }
    if(sum==number)
    {
        cout << "Armstrong Number" << endl;
    }
    else{
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}