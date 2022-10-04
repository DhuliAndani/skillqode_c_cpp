#include<iostream>
using namespace std;
int main()
{
	int i=1,n=11,j;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			cout<<"\t"<<n++;
			j++;		
		}
	n+=5;		
	cout<<"\n";
	i++;
	}
	return 0;


}