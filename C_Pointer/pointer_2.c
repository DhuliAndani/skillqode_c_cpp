#include<stdio.h>
int main()
{
	int a=10,b=20,*p,*s,c;
	p=&a;
	s=&b;
	
	printf("\n\n Value of a : %d",a);
	printf("\n\n Address of a : %u",&a);

	printf("\n\n Value of b : %d",b);
	printf("\n\n Address of b : %u",&b);
	
	c=*s;
	*s=*p;
	*p=c;

	printf("\n swap a = %d",*p);
	printf("\n swap b = %d",*s);
}