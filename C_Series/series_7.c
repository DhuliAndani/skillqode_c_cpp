#include<stdio.h>
int main()
{
	float i,n,a=0.5;
	printf("Enter n :");
	scanf("%f",&n);
	for(i=0.5;i<=n;i++)
	{
		printf("\n%.1f",a);
		a=a+i;
	}
	return 0;
}