#include<iostream>
using namespace std;
int main()
{
	int ir=5,j,sp=10;
	do
	{
		j=3;
		do
			{
				cout<<" ";
				j++;
			}while(j<=sp+2);
		j=ir;
		do
			{
				cout<<" "<<j;
				j++;
			}while(j<=5);
			ir--;
			sp--;
			cout<<"\n";
	}while(ir>=1);
	int it=2;
	do
	{
		j=0;
		do
			{
				cout<<" ";
				j++;
			}while(j<=sp+1);
		j=it;
		do
			{
				cout<<" "<<j;
				j++;
			}while(j<=5);
			it++;
			sp++;
			cout<<"\n";
	}while(it<=5);
	
	
	return 0;
}