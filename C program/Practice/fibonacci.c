#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("fibonacci Series -> ");

    for (i = 1; i <= n; ++i)
    {
        if(i == n)
        {
            printf("%d", a);
        }
        else
        {         
            printf("%d, ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}