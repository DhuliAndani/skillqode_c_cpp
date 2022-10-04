#include<iostream>
using namespace std;
int main()
{
	int ir=0,j,sp=7;
	do
	{
		j=3;
		do
			{
				cout<<" ";
				j++;
			}while(j<=sp);
		j=ir;
		do
			{
				cout<<" "<<(char)(j+65 );
				j--;
			}while(j>=0);
			ir++;
			sp--;
			cout<<"\n";
	}while(ir<=4);
	int it=3;
	do
	{
		j=1;
		do
			{
			cout<<" ";
			j++;
			}while(j<=sp);
		j=it;
		do
			{
				cout<<" "<<(char)(j+65 );
				j--;
			}while(j>=0);
			it--;
			sp++;
			cout<<"\n";
	}while(it>=0);
	
	return 0;
}