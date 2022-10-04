#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n enter x :";
    cin>>x;
    cout<<"\n enter y :";
    cin>>y;
    if(x>2000 || x<3000)
    {
        cout<<"\n assign variable less :"<<x;
    }
    else if (y>100 && y<500)
    {
        cout<<"\n assign variable greatar"<<y;
    }
}