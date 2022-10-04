#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	char a=65;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=sp+2;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j=j+1)
		{
			cout<<" "<<(char)(a++);	
		}
		sp--;
		cout<<"\n";
	}
	char n=79;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp+2;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j=j+1)
		{
			cout<<" "<<(char)(n--);	
		}
		sp++;
		cout<<"\n";
	}
	
	
	return 0;
}