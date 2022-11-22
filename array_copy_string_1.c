#include<stdio.h>
int main()
{
	int i,j;
	char str1[20],str2[20];
	printf("enter string=");
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	printf("\n string length = %d",i);
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[i];
	}
	printf(" \n Copy String = %s",str1);
	return 0;
}