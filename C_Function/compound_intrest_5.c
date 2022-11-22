// No Return No Perameter 
// -----------------------

#include<stdio.h>
#include<math.h>
float CmInt()
{
	float amt,time,rate,CI;
	
	printf("Enter principle amount : ");
	scanf("%f",&amt);

	printf("Enter time :");
	scanf("%f",&time);

	printf("Enter rate :");
	scanf("%f",&rate);

	CI =amt*(pow((1+rate/100),time));
	printf(" compound  interest =%f",CI);
}
int main()
{
	CmInt();
}        