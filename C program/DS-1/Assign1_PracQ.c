#include<stdio.h>
#include<string.h>
struct studentname
{
    char name[20];
};

int main()
{
    int n, i = 0, len = 0;
    scanf("%d", &n);
    struct studentname list[n];
    while(i!=n)
    {
        printf("Name: ");
        scanf("%s", list[i].name);
        i++;
    }
    for (int k = 0; k < n; k++)
    {
        len = strlen(list[k].name);
        if(len<4)
        {
            printf("\nName: %s\n", list[k].name);
        }
    }
        return 0;
}
