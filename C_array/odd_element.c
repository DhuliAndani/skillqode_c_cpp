#include<stdio.h>
int main()
{
	int a[10];
	int i,j=0;
	for(i=0;i<10;i++)
	{
		printf("Enter i :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			printf("\n a[%d] :%d",i,a[i]);
		 	j=j+a[i];
		}
	}
	printf("\n odd element total =%d",j);
	

}