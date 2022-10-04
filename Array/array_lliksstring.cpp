#include<iostream>
using namespace std;
int main()
{	
	int i,j,k;
	char str1[20],str2[20];
	
	cout<<"enter string=";
	cin>>str1;
	
	for(i=0;str1[i]!='\0';i++);
	cout<<"\n length ="<<i;
	
	k=i-1;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;
	}
	cout<<"\n string:="<<str2;
	return 0;



}