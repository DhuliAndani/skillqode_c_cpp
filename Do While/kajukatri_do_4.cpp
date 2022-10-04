#include<iostream>
using namespace std;
int main()
{
	int ir=3,j,sp=10,n1=1;
	do
	{
		j=0;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+1);
		j=3;
		do
		{
			cout<<" "<<n1++;
			j--;
		}while(j>=ir);
		ir--;
		sp--;
		cout<<"\n";
	
	}while(ir>=1);
	int n2=3,it=1;
	do
	{
		j=0;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+3);
		j=2;
		do
		{
			cout<<" "<<n2--;
			j--;
		}while(j>=it);
		it++;
		sp++;
		cout<<"\n";
		}while(it<=2);
	
	return 0;
}