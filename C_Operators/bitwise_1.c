#include<stdio.h>
int main()
{
	int a=100,b=127;
	printf("\na %d - %d",a,a<<1);
	printf("\nb %d - %d",b,b<<1);

	printf("\na %d - %d",a,a<<2);
	printf("\nb %d - %d",b,b<<2);

	printf("\na %d - %d",a,a<<3);
	printf("\nb %d - %d",b,b<<3);

	printf("\na %d - %d",a,a>>1);
	printf("\nb %d - %d",b,b>>1);

	printf("\na %d - %d",a,a>>2);
	printf("\nb %d - %d",b,b>>2);

	printf("\na %d - %d",a,a>>3);
	printf("\nb %d - %d",b,b>>3);
}