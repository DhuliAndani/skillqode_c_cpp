#include<iostream>
using namespace std;
int main()
{
	int n=11,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		cout<<"\t"<<n++;
		}
		n+=5;
		cout<<"\n";
	}
	return 0;
}