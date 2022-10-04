#include<iostream>
using namespace std;
int*getarray(int *a)
{
	int i;
	cout<<"\naddres\tvalue:";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i]<<"\t"<<a[i];
	}
	return 0;
}
int main()
{
	int *n;
	int a[5]={23,43,54,51,76};
	n=getarray(a);
	return 0;

}