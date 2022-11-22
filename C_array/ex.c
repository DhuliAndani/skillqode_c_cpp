#include<stdio.h>
int main()
{
	int i,n,a[5][5],b[5][5];
	for(i=0;i<3;i++)
	{
	        for(n=0;n<3;n++)
	        {
		printf("enter a[%d][%d]=",i,n);
		scanf("%d",&a[i][n]);
		
	         }
	}
	printf("\n metrix a \n\n");
	for(i=0;i<3;i++)
	{
	       for(n=0;n<3;n++)
	       {
		printf("\t%d",a[i][n]);
		
	        }
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
	        for(n=0;n<3;n++)
	        {
		printf("enter b[%d][%d]=",i,n);
		scanf("%d",&b[i][n]);
		
	         }
	}
	printf("\n   metrix b\n\n");
	for(i=0;i<3;i++)
	{
	       for(n=0;n<3;n++)
	       {
		
		printf("\t%d",b[i][n]);
	        }
	printf("\n");
	}		
	return 0;
}