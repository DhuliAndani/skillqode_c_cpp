#include<stdio.h>
int main()
{
	int a=20,*b;

	printf("\n\n Value a : %d",a);
	printf("\n\n Address a : %u",&a);

	b=&a;
	printf("\n\n Value b / Address of a : %d",b);
	printf("\n\n Address b : %u",&b);
	printf("\n\n Value of a using b : %u",*b);

}