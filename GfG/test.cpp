#include<iostream>
using namespace std;
#define greater(x, y)                   \
    if (x > y)                          \
        cout << "X is greater" << endl; \
    else                                \
cout << "Y is greater" << endl;         
int main()
{
    greater(5, 6);

    return 0;
}