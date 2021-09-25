//Name : Rohit saini
//Roll no: 18
//Batch: B2
//Prn: 1032200897
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    float marks;
    char div[1];
};
//To accept the detail of the student 
void accept(struct student s[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter division: ");
        scanf("%s",s[i].div); 
    }
}
//To Display Student Details
void display(struct student s)
{
    printf("Name: %s ",s.name);
    printf("Rollno: %d ",s.rollno);
    printf("Marks: %f ",s.marks);
    printf("Div: %s",s.div);
    printf("\n");
}
//Binary Search Function
void binary(struct student s[],int n,int key)
{
    int flag = 0;
    int start = 0, end = n;
    while(start<=end)
    {
        int mid = (start + end) / 2;
        if(s[mid].rollno==key)
        {
            flag = 1;
            display(s[mid]);
            break;
        }
        else if(s[mid].rollno>key)
        {
            end = mid - 1;
        }
        else  //s[mid].rollno<key
        {
            start = mid + 1;
        }
    }
    if(flag==0)
    printf("Student Not found");
}
//Recursive binary search
int recursivebinary(struct student s[],int start,int end,int key)
{
    int mid;
    if(end>= start)
    {
        mid = (start + end) / 2;
    if(s[mid].rollno == key)
        return mid;
    if(s[mid].rollno > key)
        return recursivebinary(s, start, mid - 1, key);
    else
    return recursivebinary(s, mid + 1, end, key);
}
return -1;
}
//Linear Search Function
void linear(struct student s[],int n,int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i].rollno==key)
        {
            flag = 1;
            display(s[i]);
            break;
        }
    }
    if(flag==0)
    {
        printf("Student Not found");
    }
}
//Sorting sturct by roll no
void bubblesort(struct student s[],int n)
{
    struct student temp = {0, 0, 0, 0};
    for (int j = 0; j < n - 1; j++)
    {
    for (int i = 0; i < n-j-1; i++)
    {
        if (s[i].rollno>s[i+1].rollno)
        {
            //shifting whole sturcture elements to other 
            temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
        }      
        }
    }
}
//selection sort
void selectionsort(struct student s[],int n)
{
    struct student temp = {0, 0, 0, 0};
    for (int i = 0; i < n-1; i++)
    {
        int min = i; // considering i'th index element as smallest
        for (int j = i + 1; j < n; j++)
        {
            if(s[j].rollno<s[min].rollno) //comparing all element next of i
            {
                temp = s[min];
                s[min] = s[j];
                s[j] = temp;
            }
        }
    }
}

//insertion sort
void insertionsort(struct student s[], int n)
{
    struct student current = {0, 0, 0, 0};
    for (int i = 1; i < n; i++)
    {
        current = s[i];
        int j = i - 1;
        while(s[j].rollno>current.rollno && j>=0)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = current; 
    }
}

void main()
{
    int n, key = 0, i = 0;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    struct student s[n];
    int choice;
    while(choice!=9)
    {
    printf("\n============Menu============\n");
    printf("1.Input Details\n2.Display Details\n3.Binary Search\n4.Linear Search\n5.Bubble Sort\n6.Binary search(Recursive)\n7.Selection Sort\n8.Insertion Sort\n9.Exit\nInput Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            accept(s,n); 
            break;
        case 2:
            for ( i = 0; i < n; i++)
                {display(s[i]);}
            break;
        case 3:
            printf("Enter rollno of student: ");
            scanf("%d",&key);
            binary(s, n, key);
            break;
        case 4:
            printf("Enter rollno of student: ");
            scanf("%d",&key);
            linear(s, n, key);
            break;
        case 5:
            bubblesort(s, n);
            break;
        case 6:
            printf("Enter rollno of student: ");
            scanf("%d",&key);
            if(recursivebinary(s, 0, n - 1, key)==-1)
                printf("Not Found");
            else
                display(s[recursivebinary(s, 0, n - 1, key)]);
            break;
        case 7: // Call case 1 for new set of detail(unsorted) then sort
            selectionsort(s, n);
            break;
        case 8: // Call case 1 for new set of detail(unsorted) then sort
            insertionsort(s, n);
            break;
    }
}
}