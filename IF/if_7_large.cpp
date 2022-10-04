#include<iostream>
using namespace std;
int main()
{
    int a=16,b=65,c=30;
    if(a>b && a>c)
    {
        std::cout<<"\n A Is Largest : "<<a;
    }
    else
    {
        if(b>c)
        {
            std::cout<<"\n B Is Largest : "<<b;
        }
        else
        {
            std::cout<<"\n C Is Largest : "<<c;
        }

    }

}
