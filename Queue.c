#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1,queqe[SIZE],i;
void RearInsert(int val)  
{
    if(rear>SIZE)

    {
        printf("Queqe Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queqe[rear]=val;
    }
    else
    {
        queqe[++rear]=val;
    }
} 
void FrontDelete()
{
    if(front==-1)
    {
        printf("Queue is Full:");
    }
    else if(front==rear)
    {
        int x=queqe[front];
        front=rear=-1;
    }
    else
    {
        int x=queqe[front++];
    }
}
void print()
{
    if(front==-1)
    {
        printf("Queqe Is Full:"); 
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("\n\t\tq[%d]=%d",i,queqe[i]);
    }
} 
int main()
{
    int ch,val;
    do 
    {
        printf("\n Press 1 for-->> Insert");
        printf("\n Press 2 for-->> Delet");
        printf("\n Press 3 for-->> Show");
        printf("\n Press 0 for-->> Exit");
        printf("\n Enter Your Choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value:");
            scanf("%d",&val);
            RearInsert(val);
            break;
        case 2:
            FrontDelete();
            break;
        case 3:
            print();
            break;
       

        }
    }
    while(ch!=0);
}
