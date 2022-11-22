#include<stdio.h>
void array(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        a[i]*=2;
    }
    //printf("\n %d - %u",a[i],&a[i]);
}
int main()
{
    int a[]={11,22,33,44,55};
    for(int i=0;i<5;i++)
    {
        //printf("\n %d-%u",a[i],&a[i]);
    }
    array(a);
    for(int i=0;i<5;i++)
        printf("\n %d-%u",a[i],&a[i]);
}