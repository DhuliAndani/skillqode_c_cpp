#include<iostream>
using namespace std;
int main()
{
	int i1=65,j,sp=10;
	char ch='A';
	while(i1<=69)
	{
		j=5;
		while(j<=sp)
		{
			cout<<" ";
			j++;
		}
		j=65;
		while(j<=i1)
		{
			cout<<" "<<(char)(j);
			j++;
		}
		i1++;
		sp--;
		cout<<"\n";
	}

	int i2=68;
	while(i2>=1)
	{
		j=5;
		while(j<=sp+2)
		{
			cout<<" ";
			j++;
		}
		j=65;
		while(j<=i2)
		{
			cout<<" "<<(char)(j);
			j++;
		}
		i2--;
		sp++;
		cout<<"\n";
	}
}