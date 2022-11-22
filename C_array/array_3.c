#include<stdio.h>
int main()
{
	int a[2],b[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("Enter a : [%d] -",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<2;j++)
	{
		printf("Enter b : [%d] -",j);
		scanf("%d",&b[j]);
	}
	printf("\n Your Array is \n");
	for(i=0;i<2;i++)
	{
		printf("\n a[%d]: %d",i,a[i]);
	}
	printf("\n Your Array is \n");
	for(j=0;j<2;j++)
	{
		printf("\n b[%d]: %d",i,b[j]);	
	}
}