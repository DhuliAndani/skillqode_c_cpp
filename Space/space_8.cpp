#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10,a=97;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=sp+1;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			cout<<" "<<(char)(a-32);
			else
			cout<<" "<<(char)(a);
			a++;	
		}
		sp--;
		cout<<"\n";
	}
	int O=111;
	for(i=5;i>=1;i--)
	{
		for(j=0;j<=sp;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			cout<<" "<<(char)(O-32);
			else
			cout<<" "<<(char)(O);
			O--;	
		}
		sp++;
		cout<<"\n";
	}
	
	return 0;
}