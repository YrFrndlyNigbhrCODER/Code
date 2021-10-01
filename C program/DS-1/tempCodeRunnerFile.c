#include <stdio.h>
#include <stdlib.h>

int max;

struct pizza
{
  int id, qty;
  char name[20];
  char address[30];
};

int rear = -1;
int front = -1;
int id = 1;
void place_order(struct pizza p[max], int max)
{

    if (rear == max - 1)
    {
        printf("List is full");
    }
    else
    {
        rear++;
        p[rear].id = id++;
        printf("\nEnter Name: ");
        scanf("%s", p[rear].name);
        printf("\nEnter address: ");
        scanf("%s", p[rear].address);
        printf("\nEnter Quantity: ");
        scanf("%d", &p[rear].qty);
    }
}

void dispatch_order(struct pizza p[max], int max)
{
    if (rear == front)
    {
        printf("\nNo more order to be dispatched");
    }
    else
    {
        front++;
        printf("\nDispatched order is: %d", p[front].id);
    }
}

void display(struct pizza p[max], int max)
{
    int i;
    if (front!=rear)
    {
    printf("\nThe pending orders are: ");
    for (int i = front + 1; i <= rear; i = i + 1)
    {
        printf("\n\nID: %d", p[i].id);
        printf("\nName: %s", p[i].name);
        printf("\nAddress: %s ", p[i].address);
        printf("\nQuantity: %d ", p[i].qty);
    }
    }
    else
    {
      printf("No orders left");
    }
}

void pizza(struct pizza p[max], int max)
{
    int ch1;
    do
    {
        printf("\n\n==========MENU OF LINEAR QUEUE=============");
        printf("\n1.Place order");
        printf("\n2.Dispatch order");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter Your Choice\n");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            place_order(p, max);
            break;

        case 2:
            dispatch_order(p, max);
            break;

        case 3:
            display(p, max);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\nPlease select the correct option");
        }
    } while (ch1 != 5);
}

struct cirpizza
{
    int cirid, cirqty;
    char cirname[20];
    char ciraddress[30];
};

int cirrear = 0;
int cirfront = 0;
int cirid = 1;

void cirplace_order(struct cirpizza cirp[max], int max)
{
    if (cirfront == (cirrear + 1) % max)
    {
        printf("List is full");
    }
    else
    {
        cirrear = (cirrear + 1) % max;
        cirp[cirrear].cirid = cirid++;
        printf("\nEnter Name: ");
        scanf("%s", cirp[cirrear].cirname);
        printf("\nEnter address: ");
        scanf("%s", cirp[cirrear].ciraddress);
        printf("\nEnter Quantity: ");
        scanf("%d", &cirp[cirrear].cirqty);
    }
}

void cirdispatch_order(struct cirpizza cirp[max], int max)
{
    if (cirrear == cirfront)
    {
        printf("\nNo more order to be dispatched");
        return;
    }
    else
    {
        cirfront = (cirfront + 1) % max;
        printf("\nDispatched order is: %d", cirp[cirfront].cirid);
    }
}

void cirdisplay(struct cirpizza cirp[max], int max)
{
    if (cirrear == cirfront)
    {
        printf("\nNo more order to be display");
        return;
    }
    int ciri;
    printf("\nOrder Detail");
    printf("\nThe pending orders are: ");
    for (ciri = cirfront + 1; ciri != cirrear; ciri = (ciri + 1) % max)
    {

        printf("\n\nID: %d", cirp[ciri].cirid);
        printf("\nName: %s", cirp[ciri].cirname);
        printf("\nAddress: %s ", cirp[ciri].ciraddress);
        printf("\nQuantity: %d ", cirp[ciri].cirqty);
    }
    printf("\n\nID: %d", cirp[ciri].cirid);
    printf("\nName: %s", cirp[ciri].cirname);
    printf("\nAddress: %s ", cirp[ciri].ciraddress);
    printf("\nQuantity: %d ", cirp[ciri].cirqty);
}

void cirpizza(struct cirpizza cirp[max], int max)
{
    max++;
    int ch2;
    do
    {
        printf("\n\n==========MENU CIRCULAR QUEUE===============");
        printf("\n1.Place order");
        printf("\n2.Dispatch order");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter Your Choice\n");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            cirplace_order(cirp, max);
            break;

        case 2:
            cirdispatch_order(cirp, max);
            break;

        case 3:
            cirdisplay(cirp, max);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\nPlease select the correct option");
        }
    } while (ch2 != 5);
}

int main()
{
    int max;
    printf("Enter the total number of order: ");
    scanf("%d", &max);
    struct pizza p[max];
    struct cirpizza cirp[max];
    int ch;
    do
    {
        printf("\n\n==============MENU===============");
        printf("\n1.Linear Queue");
        printf("\n2.Circular Queue");
        printf("\n3.Exit");
        printf("\nEnter Your Choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            pizza(p, max);
            break;

        case 2:
            cirpizza(cirp, max);
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("\nPlease select the correct option");
        }
    } while (ch != 4);
    return 0;
}