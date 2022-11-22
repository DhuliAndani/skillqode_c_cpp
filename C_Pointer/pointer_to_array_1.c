#include<stdio.h>
int main()
{
	int a[5]={23,43,54,51,76};
	int i,*ptr=NULL;
	ptr=a;
	printf("\n Address\tValue \n ");
	printf("~~~~~~~~~   ~~~~~~~~~");
	
	for(i=0;i<5;i++)
	{
		printf("\n %u  -->   %d",&a[i],a[i]);
		//printf("\n %u\t%d",(ptr+i),*(ptr+i));
	}


}