#include<iostream>
using namespace std;
int main()
{
	char i=65,j;
	do
	{
		j=i+32;
		cout<<"\n"<<(char)(i)<<"\t"<<(char)(j);
		i++;
	}while(i<=90);
	return 0;



}