#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n :");
	scanf("%d",&n);
	do
	{
		
		if(i%2==0)
		{
			printf("%d\t",i*i);
			i++;	
		}
		else
		{
			printf("%d\t",i++);
		}
		
	}while(i<=n);
	return 0;
}