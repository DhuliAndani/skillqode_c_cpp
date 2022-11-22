#include<stdio.h>
int main()
{
	int a[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter a : [%d] -",i);
		scanf("%d",&a[i]);
	}
	printf("\n Your Array is \n");
	for(i=0;i<2;i++)
	{
		printf("\n a[%d]: %d",i,a[i]);
	}

}