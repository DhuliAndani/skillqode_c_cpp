// No Return No Perameter 
// ----------------------------


#include<stdio.h>
void pattern()
{
	int i,j,sp=15;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp--;
	}
	
}
int main()
{
	
	pattern(3);
	pattern(5);
	pattern(7);
}