#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
		cout<<"enter a:";
		cin>>a[i][j];
		cout<<"enter b:";
		cin>>b[i][j];
		}
	}
	cout<<"\n your array is \n\n";
	cout<<" a \t b ";
	for(i=0;i<2;i++)
	{	
		for(j=0;j<5;j++)
		{
		cout<<"\n "<<a[i][j];
	    cout<<"\t "<<b[i][j];
		}
		
	}
	return 0;



}