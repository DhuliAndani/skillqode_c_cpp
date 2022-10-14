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
class B : public A
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
class C : public A
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
class D : public A
{
    public:
    D()
    {
        cout<<"\n D Constructor  Called.. ";
    }
    ~D()
    {
        cout<<"\n D Destructor Called.. ";
    }
};
int main()
{
    D d;
}
