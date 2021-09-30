#include<stdio.h>

int main()
{
    int c = 200;
    int temp;
    int a[4][4];
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            temp = a[i][j] + c;
            a[i][j] = a[j][i];
            a[j][i] = temp - c;
        }
    }
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

        return 0;
}