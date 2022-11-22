#include<iostream>
using namespace std;
int main()
{
	int i,a[10],x=0,y=0,c=0,d=0,n=0;
	for(i=0;i<10;i++)
	{
		cout<<"enter i:";
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		n=n+a[i];
		if(i%2!=0)
		{
			x=x+a[i];
		}
		else
		{
			y=y+a[i];
		}
		if(a[i]%2!=0)
		{
			c=c+a[i];
		}
		else
		{
			d=d+a[i];
		}
		
		
	}
	
	cout<<"\n  odd position  total=a[i] "<<x;
	cout<<"\n  even position  total=a[i]"<<y;
	cout<<"\n  odd element  total=a[i] "<<c;
	cout<<"\n  even element  total=a[i]"<<d;
	cout<<"\n  all element  total=a[i]"<<n;
	
	
	return 0;



}