#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter n :");
	scanf("%d",&n);
	do
	{
		printf("\n %d",n--);
	}while(n>=i);
	return 0;
}