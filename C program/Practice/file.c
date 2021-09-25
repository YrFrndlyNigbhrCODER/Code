#include<stdio.h>
int main()
{
    FILE*f;
    f=fopen("myfile.txt","w");
    fputs("Hello World",f);
    fseek(f,6,SEEK_SET);
    fputs("India",f);
    fclose(f);
    return 0;
}