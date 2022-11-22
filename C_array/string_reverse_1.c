#include<stdio.h>
int main()
{
	int i,j,k=0,len,fl=0;
	char str1[100],str2[100];
	printf("Enter string : ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	printf("\n string length = %d",i);
	k=i-1;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;
	}
	printf("\n Reverse String =%s",str2);
	len=i;
	for(i=0;i<=len;i++)
	{
		printf("\n %c - %c",str1[i-1],str1[len-i]);
		if(str1[i] == str2[i])
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
		printf("\n String is Palindrom");
	}
	else
	{
		printf("\n String is Not Palindrom");
	}	
}	