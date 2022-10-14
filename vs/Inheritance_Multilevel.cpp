#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A Constructor.. ";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"\n B Constructor.. ";

    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"\n C Constructor.. ";

    }
};
int main()
{
    C c;
}
