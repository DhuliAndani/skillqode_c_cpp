#include<stdio.h>
int main()
{
	int a=1,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(a%2==1)
			{
				printf("\t1");
				a++;
			}
			else
			{
				printf("\t0");
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}