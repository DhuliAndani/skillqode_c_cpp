#include<stdio.h>
int main()
{
	char  a;
	printf("Enter  a :");
	scanf("%c",&a);
	if(a>=65 || a<=90)
	{
		a=a+32;
		printf("\n %c ",a);
	}
	else if(a>=97 || a<=122)
	{
		a=a-32;
		printf("\n %c",a);
	}
	return 0;	
}