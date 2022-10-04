#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=3;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<" "<<(char)(j+65);
		}
		cout<<"\n";
	}
	for(i=3;i>=0;i--)
	{
		for(j=3;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=i;j>=0;j--)
		{
		    cout<<" "<<(char)((i-j)+65);
		}
		cout<<"\n";
	}
	return 0;
}