#include<stdio.h>
int main()
{
	int j=1,i=1,n;
	printf("Enter n :");
	scanf("%d",&n);
	do
	{
		printf("%d\t",j*i);
			i*=2;
		j++;
	}while(i<=n);
	
	return 0;
}