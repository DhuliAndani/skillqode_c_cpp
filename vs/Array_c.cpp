#include<stdio.h>
int main()
{
    float a[]={11.4,22,33,44,55};
    for(int i=0;i<5;i++)
    {
        printf("\n %.2f - %u",a[i],&a[i]);
    }
    printf("\n %f",sizeof(float));
}