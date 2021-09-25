#include<stdio.h>
int a = 100;
void f(void);
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", a);
    printf("%d", b);
    f();
    printf("%d", b);
    return 0;
}
void f()
{
    int b = 30;
    printf("%d", a);
}