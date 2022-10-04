#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			cout<<"\t"<<(char)(a+32);
            else
            cout<<"\t"<<(char)(a);
			a++;
		}
		cout<<"\n";
	}
	return 0;
}