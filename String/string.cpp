#include<iostream>
using namespace std;
int main()
{	
	int i,length;
	char str[15];
	cout<<"enter string:";
	cin>>str;
	for(i=0;str[i]!='\0';i++);
	cout<<"\n length ="<<i;
	return 0;



}