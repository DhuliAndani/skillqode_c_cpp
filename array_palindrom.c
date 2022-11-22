#include<stdio.h>
int main()
{
	int i,len,fl=0;
	char str1[100];
	printf("Enter string : ");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++);
	printf("\n string length = %d",i);
	len=i;

	for(i=0;i<=len;i++)
	{
		printf("\n %c - %c",str1[i-1],str1[len-i]);
		if(str1[i-1] == str1[len-i])
		{
			fl=0;
		}
		else
		{
			fl=1;
			break;
		}

	}	
	if(fl==0)
	{
		printf("\n String is palindrom : ");
	}
	else
	{
		printf("\n String is Not palindrom : ");
	}
	
	

}