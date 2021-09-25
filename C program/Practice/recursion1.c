#include<stdio.h>
 int fib(int n)
 {
     if (n == 0) 
     return 0;
     if (n == 1) 
     return 1; 
     else
     return (fib(n-1) + fib(n-2));
 }
  
int main()
{
    int number;
    printf("Please enter an integer:");
    scanf("%d",&number);    
    printf("The Fibonacci of %d is: ",number);
    for(int i=0;i<number;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;

}  