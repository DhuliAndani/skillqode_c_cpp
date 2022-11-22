#include<iostream>
using namespace std;
int  main()
{
	int a[5][5],b[5][5];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"enter a[i][j]";
	    cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"\t enter b[i][j]";
		cin>>b[i][j];
		}
	}
	cout<<"\n your array is \n\n";
	cout<<"\n \t\t (a)\t\t\t (b)\t\t\t   (total=A+B)\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    cout<<"\t"<<a[i][j];
		}
		for(j=0;j<3;j++)
		{
			cout<<"\t "<<b[i][j];
		}
		printf("\t==>");
		for(j=0;j<3;j++)
		{
			cout<<"\t "<<a[i][j]+b[i][j];
		}
		cout<<"\n";
	}
    return 0; 
}