#include<stdio.h>
int main()
{
	int n=5,i,j;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}