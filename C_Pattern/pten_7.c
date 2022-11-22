#include<stdio.h>
int main()
{
	
	int a=65,i,j;
	for(i=1;i<=5;i=i+1)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%c\t",a+32);
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