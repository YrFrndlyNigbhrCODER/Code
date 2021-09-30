#include<stdio.h>

struct dictionary
{
    char word[10];
    char meaning[20];
};
int compare(char a[],char b[])
{
    for(int i =0 ;i<10;i++)
    {
        if(a[i]==b[i])
        {
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    char word_to_search[10];
    struct dictionary d[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Word: ");
        scanf("%s", d[i].word);
        printf("\nMeaning: ");
        scanf("%s",d[i].meaning);
    }
    printf("Enter Word: ");
    scanf("%s", word_to_search);
    for (int i = 0; i < 3; i++)
    {
        if(compare(word_to_search,d[i].word)==1)
        {
            printf("%s", d[i].meaning);
        }
    }

        return 0;
}