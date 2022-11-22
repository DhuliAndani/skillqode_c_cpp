#include<stdio.h>
int main()
{
	int n=0,i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j=j+1)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}

	return 0;
}