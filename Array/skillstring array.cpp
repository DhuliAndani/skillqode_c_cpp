#include<iostream>
using namespace std;
int main()
{	
	int i,j;
	char str1[15],str2[15];
	cout<<"enter string=";
	cin>>str1;
	for(i=0;str1[i]!='\0';i++);
	cout<<"\n length ="<<i;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[i];
	}
	str2[j]='\0';
	cout<<"\n string 2="<<str1;
	return 0;



}