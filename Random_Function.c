#include<stdio.h>
int main()
{
    int a[30];
    // for(int i=1;i<10;i++)
    //     printf("\t %d",rand()%100);
    for(int i=0;i<20;i++)
       a[i]=rand()%50+50;
    for(int i=0;i<20;i++)
        printf("\n a[%d] : %d",i,a[i]);
}