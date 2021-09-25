#include <stdio.h>

int Input(char s[])
{   
    printf("Enter String: ");
    scanf("%s",s);
}

int Length(char s[])
{   
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

int copy(char s[])
{
    char p[50];
    int j=0,i=0;
    while(s[j]!='\0')
    {
        j++;
    }
    for(i=0;i<j;i++)
    {
        p[i]=s[i];
    }
    p[i]='\0';
    printf("Copied string is: %s",p);
}
int reverse(char s[])
{
    int j=0,end,start;
    char r[50];
    j = Length(s);
    end=j-1;
    for(start=0;start<j;start++)
    {
        r[start]=s[end];
        end--;
    }
    r[start]='\0';
    printf("Reverse String is: %s",r);
}

int checkforpalindrome(char s[])
{
   int start, middle, end, i= 0;
   i = Length(s); 
   end = i - 1;
   middle = i/2;
    for( start = 0 ; start < middle ; start++ )
   {
      if ( s[start] != s[end] )
      {
         printf("Not a palindrome!\n");
         break;
      }
      end--;
   }
   if( start == middle )
      printf("Yes,Palindrome!\n");
}

int Toupper(char s[])
{
    for(int i=0;i<=Length(s);i++)
    {
         if(s[i]>=97&&s[i]<=122)
         s[i]=s[i]-32;
   }
   printf("\nUpper Case String is: %s",s);
}

int Tolower(char s[])
{
    for(int i=0;i<=Length(s);i++)
    {
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
    }
   printf("\nLower Case String is: %s",s);
}

int Combine(char s[],char p[])
{
    int i =Length(s);
   for(int j=0; p[j]!='\0'; ++j, ++i)
   {
      s[i]=p[j];
   }
   s[i]='\0';
   printf("Combined String is: %s",s);
}

int Compare(char s[],char p[])
{
    int j=0,i=0;   
    while(s[i]!='\0' &&p[i]!='\0')  
    {  
       if(s[i]!=p[i])  
       {  
           j=1;  
           break;  
       }  
       i++;  
    }  
    if(j==0)  
    printf("Same String!"); 
    else  
    printf("Not Same String");
}

int Search(char s[], char p[])
{
    int i,j,k=Length(s), l=Length(p);
    if(k>l)
    for (int i = 0; i <= k - l; i++) 
    {
        for (j = 0; j < l; j++)
            if (s[i + j] != p[j])
                break;
 
        if (j == l)
            return i;
    }
    else
    for (int i = 0; i <= l-k; i++) 
    {
        for (j = 0; j < k; j++)
            if (p[i + j] != s[j])
                break;
 
        if (j == k)
            return i;
    }
    return -1;
}

int main()
{
    int choice1,k;
    char string1[50],string2[50];
    do
    {    
    printf("\n========MENU========\n");
    printf("--------------------------");
    printf("\n1.String Length\n2.Copy String\n3.Reverse.\n4.Palindrome?\n5.To Upper Case\n6.To Lower Case");
    printf("\n7.Combine String\n8.Compare\n9.Search\n10.Exit\n");
    printf("Choice: ");
    scanf("%d",&choice1);
    switch(choice1)
    {
        case 1:
                Input(string1);
                k= Length(string1);
                printf("String Length :%d",k);
                break;
        case 2:
                Input(string1);
                copy(string1);
                break;
        case 3:
                Input(string1);
                reverse(string1);
                break;
        case 4:
                Input(string1);
                checkforpalindrome(string1);
                break;
        case 5:
                Input(string1);
                Toupper(string1);
                break;
        case 6:
                Input(string1);
                Tolower(string1);
                break;
        case 7:
                Input(string1);
                Input(string2);
                Combine(string1,string2);
                break;
        case 8:
                Input(string1);
                Input(string2);
                Compare(string1,string2);
                break;
        case 9:
                Input(string1);
                Input(string2);                 
                k= Search(string1,string2);
                if(k==-1)
                {
                    printf("String Not Found");
                }
                else
                {
                    printf("String Found at postion: %d",k+1);
                }
                break;
        case 10:  break;
        default: printf("Wrong Choice!!!");
                 break;
    }
    }while(choice1!=10);
    
    return 0;
}
