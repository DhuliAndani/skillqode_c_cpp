#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=4;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" "<<i;
		}
		sp--;
		cout<<"\n";
	}
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
			cout<<" ";
		for(j=i;j>=1;j--)
			{
			       cout<<" "<<i;
			}
			sp++;
			cout<<"\n";
	}
	
	return 0;
}