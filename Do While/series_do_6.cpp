#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c=1,n,i=0;
	cout<<"enter n:";
	cin>>n;
    cout<<"\n"<<b<<"\n"<<c;
	do
		{
			a=b+c;
			b=c;
			c=a;
		    cout<<"\n"<<a;
			i=i+2;
		}while(i<n-1);
		return 0;


}