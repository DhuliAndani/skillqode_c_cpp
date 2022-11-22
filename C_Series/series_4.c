#include<stdio.h>
int main()
{
	int j=1,n,i;
	printf("Enter n :");
	scanf("%d",&n);
        for(i=1;i<=n;i*=2,j++)
	{
		
		printf("\t %d",i*j);
			
	}
	
	return 0;
}