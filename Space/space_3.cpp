#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
	{
		for(j=5;j<=sp;j++)
			{
				cout<<" ";
			}
		for(j=5;j>=i;j--)
			{
				cout<<" "<<i;
			}
			sp--; 
			cout<<"\n";
	}
	for(i=2;i<=5;i++)
	{
		for(j=4;j<=sp+1;j++)
			cout<<" ";
		for(j=5;j>=i;j--)
			{
				cout<<" "<<i;
			}
			sp++;
			cout<<"\n";
	}
	return 0;
}