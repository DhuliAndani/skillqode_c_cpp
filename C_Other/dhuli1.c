#include<stdio.h>
int main()
{
	char  c;
	printf("Enter charcter :");
	scanf("%c",&c);
	if(c=='a '|| c=='e'  || c=='o' ||c=='u')
	{
		printf("\n charcter  is  vowel : ");
	}
	else
	{
		printf("\n charcter  is  consonants :");
	}
	return 0;

}