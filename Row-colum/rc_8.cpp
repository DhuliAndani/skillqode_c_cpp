#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j=j+1)
		{
			cout<<"\t"<<n++;
		}		
			cout<<"\n";
	}
	return 0;


}