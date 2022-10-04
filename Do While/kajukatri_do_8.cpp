#include<iostream>
using namespace std;
int main()
{
	int ir=1,j,sp=10,a=97;
	do
	{
		j=1;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+2);
		j=1;
		do
		{
			if(j%2==0)
			cout<<" "<<(char)(a-32);
			else
			cout<<" "<<(char)(a);
			a++;
			j++;	
		}while(j<=ir);
		ir++;
		sp--;
		cout<<"\n";
	}while(ir<=4);
	
	int O=111,it=5;
	do
	{	
		j=0;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+1);
		j=1;
		do
		{
			if(j%2==0)
			cout<<" "<<(char)(O-32);
			else
			cout<<" "<<(char)(O);
			O--;	
			j++;
		}while(j<=it);
		it--;
		sp++;
        cout<<"\n";
	}while(it>=1);
	return 0;
}