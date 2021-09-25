#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector< pair<int, int> > v;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        /* pair<int, int> p;
        p.first = a[i];
        pair.second = i;
         */
        v.push_back(make_pair(a[i], i));
    }


    return 0;
}