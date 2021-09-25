#include<iostream>
using namespace std;
int main()
{
/*     int a[] = {10, 20, 30};
    int *ptr = a;  //storing the value of address of a in ptr
    cout << ptr << endl;
    cout << *(ptr+1) << endl; // here ptr is indexing pointer
 */
    int a = 10;
    int *p;
    p = &a;
    cout << *p << endl;
    cout << p << endl;
    int **q = &p;       //pointer pointinf address of pointer
    cout << *q << endl; // will print address of p
    cout << **q << endl; // will print value of a
    return 0;
}