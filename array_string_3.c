#include<stdio.h>
int main()
{
	int  i;
	char str[20];
	printf("enter string : ");
	gets(str);

	for(i=0;str[i]!='\0';i++);
	printf("\n string length = %d",i);
	
}