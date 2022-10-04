#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<=sp+1;j++)
			{
				cout<<" ";
			}
		for(j=1;j<=i;j++)
			{
				if(a%2==1)
				{
					cout<<" 1" ;
					a++;
				}
				else
				{	
					cout<<" 0" ;
					a++;
				}
			}
		sp--;
		cout<<"\n";
	
	}
	for(i=4;i>=1;i--)
	{
		for(j=0;j<=sp+3;j++)
			{
				cout<<" ";
			}
		for(j=1;j<=i;j++)
			{
				if(a%2==1)
				{
					cout<<" 1";
					a++;
				}
				else
				{	
		            cout<<" 0";
					a++;
				}
			}
		sp++;
		cout<<"\n";
	
	}
	return 0;
}