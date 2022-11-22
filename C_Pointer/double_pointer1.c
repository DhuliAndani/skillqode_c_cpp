#include<stdio.h>
int main()
{
	int a=10,*p,**p2;
	p=&a;
	p2=&p;
	
	printf("\n Value Of a : %d",a);
	printf("\n\t Address Of a : %u",&a);

	printf("\n Value a using p : %d",*p);
	printf("\n\t Address a using p : %u",p);
	printf("\n Value Of p : %u",&p);

	printf("\n Value a using p2 : %d",**p2);
	printf("\n\t Address a using p2 : %u",*p2);
	printf("\n\t Address p using p2 : %u",p2);
	printf("\n\t Address Of p2 : %u",p2);
}