#include<stdio.h>  
  
int calculate_factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * calculate_factorial(n-1));  
}  
   
int main()  
{  
  int number;  
  int factorial;  
  printf("Enter a number: ");  
  scanf("%d", &number);
  if(number<0 )
  printf("Please Enter Integer >= 0");   
  factorial = calculate_factorial(number);  
  printf("Factorial of %d is %ld\n", number, factorial);  
  return 0;  
}  