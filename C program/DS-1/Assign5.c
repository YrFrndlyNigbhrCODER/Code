#include<stdio.h>
#include<stdlib.h>
#define max 3
struct order
{
    char name[20];
    int ID, quantity;
    char address[30];
};
struct order P[max];
int rear = -1;
int front = -1;
int rear1 = -1;
int front1 = -1;
int ID = 1;

int is_full()
{
    if(rear == max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_empty()
{
    if(front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void place_order() // Take inputs and order
{
    if(is_full()==0)
    {
        rear++;
        P[rear].ID = ID++;
        printf("Enter Name: ");
        scanf("%s", P[rear].name);
        printf("Enter Address: ");
        scanf("%s", P[rear].address);
        printf("Enter quantity: ");
        scanf("%d", &P[rear].quantity);
    }    
    else
    {
        printf("\nOrder is Full!");
    }
}
void dispatch_order()
{
    if(is_empty()==0 )
    {
        front++;
        printf("\nDispatched order ID is %d! ", P[front].ID);
    }
    else
    {
        printf("\nNo more orders to dispatched! ");
        rear = -1;
        front = -1;
    }
}
void display()
{   
    if(is_empty()==0)
    {
        printf("\nThe Pending orders are: ");
        for (int i = front + 1; i <= rear; i++)
        {
            printf("\nID: %d", P[i].ID);
        }
    }
    else
    {
        printf("Nothing to show");    
    }
}
int circular_is_full()
{
    if((rear1 +1)%max == front1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int circular_is_empty()
{
    if(front1 == rear1+1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void circular_place_order() // Take inputs and order
{
    if(circular_is_full()==0)
    {
        if(front1==-1)
            front1 = 0;
        rear1 = (rear1 + 1) % max;
        P[rear1].ID = ID++;
        printf("Enter Name: ");
        scanf("%s", P[rear1].name);
        printf("Enter Address: ");
        scanf("%s", P[rear1].address);
        printf("Enter quantity: ");
        scanf("%d", &P[rear1].quantity);
    }    
    else
    {
        printf("\nOrder is Full!");
    }
}
void circular_dispatch_order()
{
    if(front1==-1)
            front1 = 0;
    if(circular_is_empty()==0 )
    {
        printf("\nDispatched order ID is %d! ", P[front1].ID);
        front1++;
    }
    else
    {
        printf("\nNo more orders to dispatched! ");
        front1 = -1;
    }
}
void circular_display()
{   if(front1==-1)
            front1 = 0;
    if(circular_is_empty()==0)
    {
        printf("\nThe orders are: ");
        for (int i = front1 ; i <= rear1; i++)
        {
            printf("\nID: %d", P[i].ID);
        }
    }
    else
    {
        printf("Nothing to show");    
    }
}
void linear_queue()
{
    int choice;
    while (choice != 4)
    {
        printf("\n=====MENU======\n");
        printf("1.Place Order\n2.Dispatch Order\n3.Display Pending Order\n4.Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                place_order();
                break;
            case 2:
                dispatch_order();
                break;
            case 3:
                display();
                break;         
        }
    }

}

void circular_queue()
{
    int choice;
    while (choice != 4)
    {
        printf("\n=====MENU======\n");
        printf("1.Place Order\n2.Dispatch Order\n3.Display Pending Order\n4.Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                circular_place_order();
                break;
            case 2:
                circular_dispatch_order();
                break;
            case 3:
                circular_display();
                break;         
        }
    }

}
int main()
{
    int choice;
    while(choice!=3)
    {
        printf("\n=======MENU=======\n1.Linear Queue \n2.Circular Queue\n3.Exit\nChoice: \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                linear_queue();
                break;
            case 2:
                circular_queue();
                break;
        }
    }
    return 0;
}