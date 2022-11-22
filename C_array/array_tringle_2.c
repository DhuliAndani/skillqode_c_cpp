#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int i,j,x=0,y=0,z=0,x1=0,y1=0,z1=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tEnter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Your Matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)	
		{
			printf("\t %d",a[i][j]);
			printf("\t %d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				x=x+a[i][j];
				x=x+b[i][j];
			}
			else if(j>i)
			{
				y=y+a[i][j];
				y=y+b[i][j];
			}
			else
			{
				z=z+a[i][j];
				z=z+b[i][j];
			}
		}
		printf("\n");
	}
	printf("\n Daiagonal Total a[0][0]+a[1][1]+a[2][2]: %d ",x);
	printf("\n Daiagonal Total b[0][0]+b[1][1]+b[2][2]: %d ",x1);
	printf("\n Upper Total a[0][1]+a[0][2]+a[1][2]: %d ",y);
	printf("\n Upper Total b[0][1]+b[0][2]+b[1][2]: %d ",y1);
	printf("\n Lower Total a[1][0]+a[2][0]+a[2][1]: %d ",z);
	printf("\n Lower Total b[1][0]+b[2][0]+b[2][1]: %d ",z1);
	
}