#include <iostream>
using namespace std;
class A
{
    int n;
    public:
    A(int i)
    {
        n=i;
        cout<<" A Constructor Called.. " <<n;
        cout<<"\n";
    }
    ~A()
    {
        cout<<"\n A Destructor Called .. " <<n;
    }
};
int main()
{
    A a1(1),a2(2),a3(3);
}