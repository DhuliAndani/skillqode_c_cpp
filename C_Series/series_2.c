#include<stdio.h>
int main()
{
	int d,n;
	printf("Enter n :");
	scanf("%d",&n);
	for(d=1;d<=n;d++)
	{
		
		if(d%2==0)
		{
			printf("\t%d",d*d);	
		}
		else
		{
			printf("\t %d",d);
		}
		
	}
	
	return 0;
}