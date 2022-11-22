#include<stdio.h>
int main()
{
	int m,p,c;
	float total();
	printf("Enter Maths Marks : ");
	scanf("%d",&m);
	printf("Enter Physics Marks : ");
	scanf("%d",&p);
	printf("Enter chemistry Marks : ");
	scanf("%d",&c);

	total(m,p,c);
		
}
float total(int m,int p,int c)
{
	float per(float total);
	float total;	
	total=m+p+c;
	printf("\n Total Is : %.2f",total);
	per(total);
}
float per(float total)
{
	float per;
	per=total/300*100;
	printf("\n Per Is : %.2f",per);
	
	if(per>=75)
	{
		printf("\n grade : A");
	}
	else if(per>=65 && per<75)
	{
		printf("\n grade : B");
	}
	else if(per>=50 && per<65)
	{
		printf("\n grade : C");
	}
	else if(per>=35 && per<50)
	{
		printf("\n grade : D");
	}
	else
	{
		printf("\n Fail  ");
	}
}
