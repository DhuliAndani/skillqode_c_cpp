#include<iostream>
using namespace std;
int main()
{
	int i=1,n,j=1;
	do
	{
			cout<<"\t"<<i*j;
			i*=2;			
			j++;
	}while(i<=100);
	return 0;


}