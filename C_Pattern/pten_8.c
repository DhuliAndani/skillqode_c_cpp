#include<stdio.h>
int main()
{
	
	int a=97,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
			printf("%c\t",a-32);
			}
			else
			{
			printf("%c\t",a);
			}
			a++;
		}
		printf("\n");
	}


}