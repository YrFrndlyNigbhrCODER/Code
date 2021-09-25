#include<stdio.h>
struct book
{
    char name[10];
    int id;
    float cost;
};
//Get book Data
void getdata(struct book b[],int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("Name: ");
    scanf("%s",b[i].name);
    printf("Id: ");
    scanf("%d",&b[i].id);
    printf("Cost: ");
    scanf("%f",&b[i].cost);
    }
}
//display the books
void display(struct book b[], int n)
{
    for (int i = 0; i < n; i++)
    {
    if(b[i].id==0)
    {
        continue;
    }    
    printf("Name : %s\t", b[i].name);
    printf("Id: %d\t", b[i].id);
    printf("Price %f\n", b[i].cost);
    }
    
}

// To find book whose cost is less then given price
void lessthen500(struct book b[], int n)
{
    struct book b2[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].cost<500)
        {
            b2[count] = b[i];
            count++;
        }
    }
    display(b2,count);
    printf("Number of book whose price is less than 500 : %d ", count);

}
// To delete duplicate book data
void deleteduplicatebook(struct book b1[],int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if(b1[i].id==b1[j].id)
            {
                b1[i].id = 0;
            }
        }
    }
}
// Count Number of book Whose cost is more then given price
void costmorethan500(struct book b1[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b1[i].cost>=500)
        {
            count++;
        }
    }
    printf("Number of book whose price is more than 500: %d ", count);
}

int main(void)
{
    int n;
    printf( "Enter Number of Books: ");
    scanf("%d",&n);
    struct book b1[n];
    int choice;
    while(choice!=6)
    {
    printf("\n============Library Menu============\n");
    printf("1.Input Details\n2.Display Details\n3.Cost Less than 500\n4.Cost More than 500\n5.Delete Duplicate Entries\n6.Exit\nInput Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            getdata(b1,n); 
            break;
        case 2:
            display(b1,n);
            break;
        case 3:
            lessthen500(b1,n); 
            break;
        case 4:
            costmorethan500(b1,n);
            break;
        case 5:
            deleteduplicatebook(b1,n);
            break;
    }
}
}