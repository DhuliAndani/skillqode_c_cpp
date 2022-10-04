#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"\n enter n:";
	cin>>n;
	do
	{
		if(i%2==0)
		{
			cout<<"\t"<<i*i;
			i++;
		}
		else
		{
			cout<<"\t"<<i;
			i++;
		}
	}while(i<=n);
	


}