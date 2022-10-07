//3
#include<iostream>
using namespace std;
class Test
{
    int testCode;
    string description;
    int nocandidate,centerread;
    public:
    void schedule();
    void calcntr();
    void disptest();
};
    void Test::schedule()
    {
        cout<<"\n Enter TestCode : ";
        cin>>testCode;
        cout<<"\n Description : ";
        cin>>description;
        cout<<"\n Number of Candidate : ";
        cin>>nocandidate;
        calcntr();
    }
   void Test::calcntr()
    {
       centerread = nocandidate/100+1;
    }
    void Test::disptest()
    {
        cout<<"\n testCode : "<<testCode;
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
