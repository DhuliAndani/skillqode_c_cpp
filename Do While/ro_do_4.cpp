#include<iostream>
using namespace std;
int main()
{
	char i=65,j;
	do
	{
		j=1;
		do
		{
			cout<<"\t"<<(char)(i);
			j++;
		}while(j<=5);		
	cout<<"\n";
	i=i+1;
	}while(i<=69);
	return 0;


}