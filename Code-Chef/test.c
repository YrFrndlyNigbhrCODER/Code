#include<stdio.h>
typedef struct node{
    char name[20];
    struct node *next;
} NODE;
int main()
{
    printf("%ld", sizeof(NODE));
}