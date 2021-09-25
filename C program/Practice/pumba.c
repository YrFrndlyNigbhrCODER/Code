#include <stdio.h>

int main()
{
    int k,a[2][2],b[2][2],c[2][2];
    int row=0 ,column=0;
    printf("Please declare size of array:");
    printf("\nRows:");
    scanf("%d",&row);
    printf("\nColumn:");
    scanf("%d",&column);
    printf("Details of First Matrix: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Value of a[%d",i);
            printf("][%d",j);
            printf("]: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Details of Second Matrix: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Value of b[%d",i);
            printf("][%d",j);
            printf("]: ");
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
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                   c[i][j] = a[i][j] + b[i][j];
                    printf("%d\t",c[i][j]);
                }
            }
            break;

   case 2:
            printf("\nSubtraction Matrix: \t");
            for(int i=0;i<row;i++)
            {
              for(int j=0;j<column;j++)
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
