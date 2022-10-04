#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
	{
		for(j=3;j<=sp+2;j++)
			{
				cout<<" ";
			}
		for(j=i;j<=5;j++)
			{
				cout<<" "<<j;
			}
			sp--;
			cout<<"\n";
	}
	for(i=2;i<=5;i++)
	{
		for(j=0;j<=sp+1;j++)
			{
				cout<<" ";
			}
		for(j=i;j<=5;j++)
			{
				cout<<" "<<j ;
			}
			sp++;
			cout<<"\n";
	}

	
	return 0;
}