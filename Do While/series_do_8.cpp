#include<iostream>
using namespace std;
int main()
{
	char i=1;
	do
		{
			cout<<"\n"<<(char)(i+64)<<"\n"<<(char)(i+98);
			i=i+4;
		}while(i<25);
		return 0;


}