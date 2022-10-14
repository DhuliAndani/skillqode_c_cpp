#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A Constructor Called.. ";
    }
    ~A()
    {
        cout<<"\n A Destructor Called.. ";
    }
};
class B
{
    public:
    B()
    {
        cout<<"\n B Constructor Called.. ";
    }
    ~B()
    {
        cout<<"\n B Destructor Called.. ";
    }
};
class C : public A, public B
{
    public:
    C()
    {
        cout<<"\n C Constructor  Called.. ";
    }
    ~C()
    {
        cout<<"\n C Destructor Called.. ";
    }
};
int main()
{
    C c;
}
