#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	char n=65;
	do
	{
		j=1;
		do
		{
			cout<<"\t"<<(char)(n++);
			j=j+1;
		}while(j<=5);		
	cout<<"\n";
	i++;
	}while(i<=5);
	return 0;


}