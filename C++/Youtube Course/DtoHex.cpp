#include<iostream>
using namespace std;
void decimaltohexa(int num)
{
    int i = 1, j, r;
    char hex[10];
    while (num != 0)
    {
        r = num % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        num = num / 16;
    }
    j = i - 1;
    while(j!=0)
    {
        cout << hex[j];
        j--;
    }
}

int main ()
{
    int num;

    cin >> num;
    decimaltohexa(num);
    return 0;
}