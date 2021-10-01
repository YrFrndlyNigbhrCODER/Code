#include<stdio.h>
#include<stdlib.h>
int row, column, k, k2;
void getdata(int a[row][column]);
void display(int row, int column, int a[row][column]);
int nonzero(int row, int column, int a[row][column]);
void compactform(int a[row][column], int S ,int b[k + 1][3]);
void simpletranspose(int b[k + 1][3], int bt[k + 1][3]);
void fasttranspose(int b[k + 1][3], int ft[k + 1][3]);
void addsparse(int a[row][column], int a2[row][column]);

void main()
{
    int ch=0;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&column);
    int a[row][column];
    int a2[row][column];
    getdata(a);
    k = nonzero(row, column, a);
    int b[k+1][3];
    int bt[k+1][3];
    int ft[k+1][3];
    while(ch!=6)
    {
        printf("\n1.Display\n2.Compact Matrix\n3.Simple Transpose\n4.Fast Transpose\n5.Add Sparse\n6.Exit");
        printf("\nEnter a choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                display(row, column, a);
                break;
            case 2:
                compactform(a, k, b);
                break;
            case 3:
                simpletranspose(b, bt);
                break;
            case 4:
                fasttranspose(b, ft);
                break;
            case 5:
                compactform(a, k, b);
                getdata(a2);
                k2 = nonzero(row, column, a2);
                int b2[k2 + 1][3];
                compactform(a2, k2, b2);
                addsparse(b, b2);
                break;
        }
    }
}
void getdata(int a[row][column])
{
    printf("\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int row, int column, int a[row][column])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int nonzero(int row, int column, int a[row][column])
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(a[i][j]!=0){
                count++;
            }
        }
    }
    //printf("No of non-zero elements : %d",k);
    return count;
}

void compactform(int a[row][column],int k ,int b[k + 1][3])
{
    int n=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(a[i][j]!=0)
            {
                b[n][0] = i;
                b[n][1] = j;
                b[n][2] = a[i][j];
                n++;
            }
        }
    }
    b[0][0] = row;
    b[0][1] = column;
    b[0][2] = n - 1;

    printf("\nCompact Matrix: \n");
    printf("Row\tColumn\tValue\n");
    display(k + 1, 3, b);
}

void simpletranspose(int b[k + 1][3], int bt[k + 1][3])
{
    int m = 0, c = 1;
    bt[0][0] = b[0][1];
    bt[0][1] = b[0][0];
    bt[0][2] = b[0][2];
    for (int i = 0; i < b[0][1]  ; i++)
    {
        for (int j = 1; j < b[0][2]+1; j++)
        {
            if(b[j][1]==m)
            {
                bt[c][0] = b[j][1];
                bt[c][1] = b[j][0];
                bt[c][2] = b[j][2];
                c++;
            }
        }
        m++;
    }

    printf("\nSimple Transpose Matrix: \n");
    printf("Column\tRow\tValue\n");
    display(k + 1, 3, bt);
}

void fasttranspose(int b[k + 1][3], int ft[k + 1][3])       
{
    int a1[column],b1[column+1];
    for (int i = 0; i < column; i++)        
    {
        a1[i]=0;
    }
    for (int j = 1; j < k + 1; j++)
    {
        a1[b[j][1]]+=1;     // count no of non zero in each column
    }

    b1[0] = 1;
    for (int x = 1; x < column; x++)
    {
        b1[x] = a1[x - 1] + b1[x - 1];  //index
    }
    ft[0][0] = b[0][1];
    ft[0][1] = b[0][0];
    ft[0][2] = b[0][2];
    for (int i = 1; i < k + 1; i++)
    {
        ft[b1[b[i][1]]][0] = b[i][1];   //column
        ft[b1[b[i][1]]][1] = b[i][0];   //row
        ft[b1[b[i][1]]][2] = b[i][2];   //Value
        b1[b[i][1]] += 1;
    }
    printf("\nFast Transpose Matrix: \n");
    printf("Column\tRow\tValue\n");
    display(k + 1, 3, ft);
}

void addsparse(int b[k + 1][3], int b2[k2 + 1][3])
{
    int i = 1, j = 1, t1 = 0, t2 = 0, x = 1;    // i = row of matrix 1 
    t1 = b[0][2];   //t1 = non-zero element in matrix 1 // j = column of matrix 2
    t2 = b2[0][2];  // t2 = non zero element in matrix 2// x will be the  rows of addition
    int b3[k + k2 + 1][3];   // Stores the result of addition
    while (i <= t1 && j <= t2)
    {
        if (b[i][0] == b2[j][0])        // check row index of 1st == row index of second
        {
            if(b[i][1] == b2[j][1])      // check column index of 1st == column index of second
            {
                b3[x][0] = b[i][0];       // simply add value keeping index same  
                b3[x][1] = b[i][1];
                b3[x][2] = b2[j][2] + b[i][2];
                x++;
                i++;
                j++;
            }
            else
            {
                if (b[i][1] < b2[j][1])    // if column value is less in first then copy first to result
                {
                    b3[x][0] = b[i][0];
                    b3[x][1] = b[i][1];
                    b3[x][2] = b[i][2];
                    x++;
                    i++;
                }
                else
                {
                    if(b[i][1] > b2[j][1])      // if column value is greater in first then copy second to result
                    {
                        b3[x][0] = b2[j][0];
                        b3[x][1] = b2[j][1];
                        b3[x][2] = b2[j][2];
                        x++;
                        j++;
                    }
                }
            }
        }
        else                            // if row index are not same in first and second matrix
        {
            if(b[i][0] > b2[j][0])      // row index in first is great then copy second to result
            {
                b3[x][0] = b2[j][0];
                b3[x][1] = b2[j][1];
                b3[x][2] = b2[j][2];
                x++;
                j++;

            }
            else
            {
                if(b[i][0] < b2[j][0])      // row index in second is great then copy first to result
                {
                    b3[x][0] = b[i][0];
                    b3[x][1] = b[i][1];
                    b3[x][2] = b[i][2];
                    x++;
                    i++;

                }
            }
        }
    }
    while ((i <= t1) && (j>=t2))            // remaing element in compact form of first
    {
        b3[x][0] = b[i][0];
        b3[x][1] = b[i][1];
        b3[x][2] = b[i][2];
        x++, i++;
    }
    while ((j <= t2) && (i >= t1))          // remaing element in compact form of ssecond
    {
        b3[x][0] = b2[j][0];
        b3[x][1] = b2[j][1];
        b3[x][2] = b2[j][2];
        x++, j++;
    }
    printf("ADDITION: \n");
    b3[0][0] = b[0][0];
    b3[0][1] = b[0][1];
    b3[0][2] = x-1;
    display(x , 3, b3);

}

