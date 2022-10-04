#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\n  Eligible for vote : "<<age;
    }
    else
    {
        cout<<"\n  Not Eligible for vote : "<<age;
    }


}