#include<stdio.h>
int main()
{
	int n=11,i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d\t",n++);
		}
		
		n+=5;
		printf("\n");
	}
	
	return 0;
}
