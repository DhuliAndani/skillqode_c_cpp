#include<iostream>
using namespace std;
int main()
{
	int a[2],b[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		cout<<"enter a[i]:";
		cin>>a[i];
	}
	for(j=0;j<2;j++)
	{
		cout<<"enter b[j]:";
		cin>>b[j];
	}
	cout<<"\n your array is \n \n";
	for(i=0;i<2;i++)
	{
		cout<<"\n a:"<<a[i];
	}
	cout<<"\n your array is \n \n";
	for(j=0;j<2;j++)
	{
		cout<<"\n b: "<<b[j];
	}
	return 0;



}