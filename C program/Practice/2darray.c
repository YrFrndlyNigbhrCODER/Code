#include <stdio.h>

int main()
{
    int k,a[2][2],b[2][2],c[2][2];
    printf("Enter First Matrix: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second Matrix: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("====MENU=====\n");
    printf("1.ADD\n");
    printf("2.SUB\n");
    scanf("%d",&k);
    switch(k)
    {
    case 1:
            printf("Addition Matrix:\t");
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                   c[i][j] = a[i][j] + b[i][j];
                    printf("%d\t",c[i][j]);
                }
            }
            break;

   case 2:
            printf("\nSubtraction Matrix: \t");
            for(int i=0;i<2;i++)
            {
              for(int j=0;j<2;j++)
                {
                  c[i][j] = a[i][j] - b[i][j];
                  printf("%d\t",c[i][j]);
                }

            }
            break;
    default: printf("Wrong Choice!!!");
             break;
    }
    return 0 ;
}
