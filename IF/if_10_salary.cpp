#include<iostream>
using namespace std;
int main()
{
    int salary,hra,da,z;
    cout<<"Enter Salary : ";
    cin>>salary;
    if(salary<=5000)
    {
        hra=salary*0.08;
		da=salary*0.2;
        cout<<"\n hra : "<<hra<<"\n da : "<<da;
    }
    else if(salary>=5000 && salary<=10000)
	{
		hra=salary*0.12;
		da=salary*0.3;
        cout<<"\n hra : "<<hra<<"\n da : "<<da;
    }
    else if( salary>=10000 && salary<=15000)
	{
		hra=salary*0.15;
		da=salary*0.4;
        cout<<"\n hra : "<<hra<<"\n da : "<<da;
    }
    else if (salary>=15000)
	{
		hra=salary*0.20;
		da=salary*0.5;
        cout<<"\n hra : "<<hra<<"\n da : "<<da;
    }
    z=salary+hra+da;
    cout<<"\n Total Salary : "<<z;
}