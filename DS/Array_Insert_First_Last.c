/*#include<stdio.h>
int i,a[10];
int insertArray()
{
    for(i=0;i<5;i++)
    {
        printf("Enter Array..[%d]",i);
        scanf("%d",&a[i]);
    }
    printArray(a);
}
void printArray(int a[])
{
    for (int i=0;i<5;i++)
    {
        printf("\n %d ",a[i]);
    }
}
void lastInsert()
{
   
}
int main()
{
    insertArray();
    //printArray();
    lastInsert();
    //lastInsert();
}*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 9
int top = -1, a[size], val,pos, c = -1;
void lastinsert()
{
    printf("\nEnter Value : ");
    scanf("%d", &val);
    if (top < size)
    {
        a[++top] = val;
    }
}
void dis()
{
    int i, j = 0;
    printf("a[%d] = ", c);
    for (i = 0; i < top + 1; i++)
    {
        printf("%d  ", a[i]);
    }
}
void pop()
{
    printf("\nEnter Position : ");
    scanf("%d", &pos);
    if(top<0)
        printf("Stack Undeflow..");
    else
        c=a[top--];
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n\n1.INSERT VALUE\n");
        printf("2.DISPLAY\n");
        printf("\n 3.Delete\n");
        printf("0.EXIT\n");
        printf("~~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            if (top < size)
            {
                lastinsert();
                c++;
            }
            else
                printf("Array is Full\n");
            break;
        case 2:
            printf("\n");
            dis();
            break;
        case 3:
            printf("\n");
            pop();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter Right Choice!!!!!!");
            break;
        }
    }
}