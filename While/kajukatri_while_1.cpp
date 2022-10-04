#include<iostream>
using namespace std;
int main()
{
	int i1=1,j,sp=10;
	while(i1<=5)
	{
		j=1;
		while(j<=sp)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=i1)
		{
			cout<<" "<<j;
			j++;
		}
		i1++;
		sp--;
		cout<<"\n";
	}
	int i2=4;
	while(i2>=1)
	{
		j=0;
		while(j<=sp+1)
			{
			cout<<" ";
			j++;
			}
		j=1;
		while(j<=i2)
			{
				cout<<" "<<j;
				j++;
			}
			i2--;
			sp++;
			cout<<"\n";
	}
	
	return 0;
}