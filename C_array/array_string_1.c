#include<stdio.h>
int main()
{
	char str[3];
	printf("Enter String : ");
	//scanf("%s",str);
	scanf("%[^\n]",str);
	

	printf("\n string :%s",str);
}