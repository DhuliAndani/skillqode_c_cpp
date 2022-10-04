#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=7;
	for(i=0;i<=4;i++)
	{
		for(j=3;j<=sp;j++)
			{
				cout<<" ";
			}
		for(j=i;j>=0;j--)
			{
				cout<<" "<<(char)(j+65 );
			}
			sp--;
			cout<<"\n";
	}
	
	for(i=3;i>=0;i--)
	{
		for(j=1;j<=sp;j++)
        {
			cout<<" ";
        }
		for(j=i;j>=0;j--)
			{
        		cout<<" "<<(char)(j+65 );
			}
			sp++;
			cout<<"\n";
	}
	
	return 0;
}