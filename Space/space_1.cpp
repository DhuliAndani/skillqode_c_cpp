#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		sp--;
		cout<<"\n";
	}
	for(i=4;i>=1;i--)
	{
		for(j=0;j<=sp+1;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			{
				cout<<" "<<j;
			}
			sp++;
			cout<<"\n";
	}
	
	return 0;
}