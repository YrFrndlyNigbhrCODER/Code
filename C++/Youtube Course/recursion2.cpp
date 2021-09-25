#include<iostream>
using namespace std;
bool sortedarr(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    return (arr[0] < arr[1] && sortedarr(arr + 1, n - 1));
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};     // array should be strictly increasing
    cout << sortedarr(arr, 6) << endl;  // ie no duplicated entries allowed
    return 0;
}