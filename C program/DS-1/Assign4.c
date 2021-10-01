#include<stdio.h>
char stack[10];
int top = -1;
void push(char c)
{
    top++;
    stack[top] = c;
}
char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        top--;
        return stack[top+1];
    }
}

/* int isfull()
{
    if(top == 9)
    {
        return 1;
    }
    return 0;
} */

int main()
{
    int i = 0;
    char exp[10];
    printf("Enter Expresion: ");
    scanf("%s", exp);
    while(exp[i]!='\0')
    {
        push(exp[i]);
        i++;
    }
    printf("%s\n", stack);
    while(top!=-1)
    {
        printf("%c\n", pop());
    }
    //infix_to_postfix(exp);
    return 0;
}