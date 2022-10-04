#include<iostream>
using namespace std;
int main()
{	
	int i,len,fl=0;
	char str1[100];
	cout<<"enter string:";
	cin>>str1;
	for(i=0;str1[i]!='\0';i++);
	cout<<"\n len ="<<i;
	len=i;
	for(i=0;i<=len;i++)
	{
		cout<<"\n"<<(char)(str1[i-1])<<"\t"<<(char)(str1[len-i]);
		if(str1[i-1]==str1[len-i])
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
		cout<<"\n string is pallindrom";
	}
	else
	{
		cout<<"\n string is not  pallindrom";
	}

	return 0;



}