#include<stdio.h>
int main()
{
	int a=1,b=1,c=1,n,i=1;
	printf("Enter n :");
	scanf("%d",&n);
	printf("%d\n%d\n",b,c);
	do
	{
		a=b+c;
		b=c;
		c=a;
		printf("%d\n",a);
		i=i+2;
	}while(i<n-1);	

	return 0;
}