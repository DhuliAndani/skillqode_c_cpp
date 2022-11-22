#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n Enter Value A : ");
	scanf("%d",&a);
	printf("\n Enter Value B : ");
	scanf("%d",&b);
	

	printf("\n sum a+b : %d",a+b);
	printf("\n Sum a-b : %d",a-b);
	printf("\n Sum a*b : %d",a*b);
	printf("\n Sum a/b : %d",a/b);
	printf("\n Sum a%b : %d",a%b);
}
int main()
{
	dosum();
}