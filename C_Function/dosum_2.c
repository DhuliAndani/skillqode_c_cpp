/*-----------------------------
// No Return No Parametere //
-----------------------------*/

/*#include<stdio.h>
void dosum()
{
	int a,b;
	printf("Enter values A : ");
	scanf("%d",&a);
	printf("Enter values B : ");
	scanf("%d",&b);

	printf("\n sum : %d",a+b);	
}
int main()
{
	dosum();
}*/


/*-------------------------------
// No Return With Parametere //
-------------------------------*/

/*#include<stdio.h>
void dosum(int x,int y)
{
	printf("\n x : %d \t y : %d",x,y);
	printf("\n sum : %d",x+y);
}

int main()
{
	int a,b;
	printf("Enter values A : ");
	scanf("%d",&a);
	printf("Enter values B : ");
	scanf("%d",&b);
	dosum(a,b);
}*/


/*-------------------------------
// With Return No Parametere //
-------------------------------*/

/*#include<stdio.h>
int dosum()
{
	int a,b;
	printf("Enter values A : ");
	scanf("%d",&a);
	printf("Enter values B : ");
	scanf("%d",&b);
	return(a+b);
}
int main()
{
	int sum;
	sum=dosum();
	printf("\n sum : %d",sum);
}*/


/*-------------------------------
// With Return With Parametere //
-------------------------------*/

#include<stdio.h>
int dosum(int a,int b)
{
	return(a+b);	
}
int main()
{
	int a,b;
	printf("Enter values A : ");
	scanf("%d",&a);
	printf("Enter values B : ");
	scanf("%d",&b);

	printf("\n sum : %d",dosum(a,b));
}











		