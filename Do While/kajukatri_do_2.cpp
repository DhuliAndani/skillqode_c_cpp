#include<iostream>
using namespace std;
int main()
{
	int ir=1,j,sp=10;
	do
	{
		j=1;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+1);
		j=1;
		do
		{
			cout<<" "<<ir;
			j++;
		}while(j<=ir);
		
		ir++;
		sp--;
		cout<<"\n";
	}while(ir<=5);
		

	int it=4;
	do
	{
		j=0;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+2);
		j=1;
		do
		{
			cout<<" "<<it;
			j++;
		}while(j<=it);
		
		it--;
		sp++;
		cout<<"\n";
	}while(it>=1);
	return 0;
}