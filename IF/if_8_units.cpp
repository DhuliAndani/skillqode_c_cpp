#include<iostream>
using namespace std;
int main()
{
    float units,amount,total,totalamount;
    cout<<"Enter Units : ";
    cin>>units;
    if(units<=100)
    {
        amount=units*0.6+50;
        cout<<"\n amount : "<<amount;
    }
    else if(units<=200)
	{
		amount=(100*0.6)+(units*0.80)+50;
        cout<<"\n amount : "<<amount;
    }
    else if(units>=300)
	{
		amount= (100*0.60)+(200*0.80)+50;    
        cout<<"\n amount : "<<amount;
    }
    total=amount;
    cout<<"\n Total Units : "<<total;
    if(totalamount<=300)
	{
		totalamount=(total*1.15);
        cout<<"\n Total Amount : "<<totalamount;
    }
}