#include<iostream>
using namespace std;
int main()
{
    float a,b,c,total,marks;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    total=a+b+c;
    cout<<"\n total::"<<total;
    marks=total/3;
    cout<<"\n percantage::"<<total/3;
    if(marks>75)
    {
        cout<<"\n grade : A";
    }
    else if(marks<=75 && marks>60)
    {
        cout<<"\n grade : B";
    }
    else if(marks>60 && marks>45)
    {
        cout<<"\n grade : C";
    }
    else if(marks>45 && marks>35)
    {
        cout<<"\n grade : D";
    }
    else if(marks<=35)
    {
        cout<<"\n grade :FAIL";
    }

}