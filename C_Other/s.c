#include<stdio.h>
int main()
{
	int  i,legnth;
	char str[20];
	printf("enter string=");
	gets(str);

	for(i=0;str[i]!='\0';i++);
	printf("\n legnth=%d",i);
	
}