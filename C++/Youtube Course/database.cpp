#include<iostream>
using namespace std;

int main()
{
    int a;
    short int si;
    long int li;
    float b;
    char c;
    bool d;
    a = 12;
    cout << "Size of int " << sizeof(a) << endl;
    cout << "Size of float " << sizeof(b) << endl;
    cout << "Size of Char " << sizeof(c) << endl;
    cout << "Size of Bool " << sizeof(d) <<endl;
    cout << "Size of Short int " << sizeof(si) <<endl;
    cout << "Size of Long int  " << sizeof(li) <<endl;
    return 0;
}