#include<iostream>
using namespace std;
int main()
{
	int i1=5,j,sp=10;
	while(i1>=1)
	{
		j=5;
		while(j<=sp)
			{
				cout<<" ";
				j++;
			}
		j=5;
		while(j>=i1)
			{
				cout<<" "<<i1;
				j--;
			}
			i1--;
			sp--; 
			cout<<"\n";
	}
	int i2=2;
	while(i2<=5)
	{
		j=4;
		while(j<=sp+1)
		{
			cout<<" ";
			j++;
		}
		j=5;
		while(j>=i2)
			{
				cout<<" "<<i2;
				j--;
			}
			i2++;
			sp++;
			cout<<"\n";
	}
	return 0;
}