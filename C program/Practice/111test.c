#include<stdio.h>

int main()
{
    int a = 10;
    a++;
    ++a;
    a = ++a + a++;
    printf("%d\n", a);
    return 0;
}