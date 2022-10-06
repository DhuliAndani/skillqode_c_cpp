//3
#include<iostream>
using namespace std;
class Test
{
    int testcode;
    string description;
    int nocandidate,centerread;
    public:
    void schedule();
    void calcntr();
    void disptest();
};
    void Test::schedule()
    {
        cout<<"\n enter testcode : ";
        cin>>testcode;
        cout<<"\n description : ";
        cin>>description;
        cout<<"\n number of candidate : ";
        cin>>nocandidate;
        calcntr();
    }
   void Test::calcntr()
    {
       centerread = nocandidate/100+1;
    }
    void Test::disptest()
    {
        cout<<"\n testcode : "<<testcode;
        cout<<"\n description : "<<description;
        cout<<"\n number of candidate  : "<<nocandidate;
        cout<<"\n number of center : "<<centerread;
    }
int main()
{
    Test foruserview;
    foruserview.schedule();
    foruserview.disptest();
}
