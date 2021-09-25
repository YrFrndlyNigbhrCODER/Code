//Heap
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "Value " << a << "\nAddress: " << &a << endl;
    int *p = new int(); //Allocate Memory
    *p = 10;
    cout << "Value " << *p << "\nAddress: " << p << endl;
    delete (p);     //Dealocate Memory
    p = new int[4]; //To store a array in Heap
    delete[] p; //delete array values
    p =NULL;    //setting memory of pointer to 0 

    return 0;   // after exiting main pointer will be destroyed
}