#include<stdio.h>
int main()
{
	int a[10];
	int i,x=0,y=0,c=0,d=0,n=0;
	for(i=0;i<10;i++)
	{
		printf("Enter i :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		n=n+a[i];
		if(i%2!=0){
			x=x+a[i];
		}
		else{
			y=y+a[i];
		}
		if(a[i]%2!=0){
			c=c+a[i];
		}
		else{
			d=d+a[i];
		}
	}
	printf("\n odd position total =%d",x);
	printf("\n even position total =%d",y);
	printf("\n odd element total =%d",c);
	printf("\n even element total =%d",d);
	printf("\n All element total =%d",n);
	return 0;
}