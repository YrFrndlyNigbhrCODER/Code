#include <stdio.h>
 
void main()
{
    float a,b,c;
    float d;
    int choice;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("=====MENU=====");
    printf("\n1.ADD");
    printf("\n2.DIV");
    printf("\n3.SUB");
    printf("\n4.PRODUCT");
    printf("\nPlease Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                c = a + b;
                printf("\nADD = %f",c);
                break;
        case 2:
                d = a / b;
                printf("\tDIV = %f",d);
                break;
        case 3:     
                c = a - b;
                printf("\nSUB = %f",c);
                break;
        case 4:
                c = a * b;
                printf("\nProduct = %f",c);
                break;
        default:
                printf("\nWrong Choice!!!");
                break;
    }
   
   } 