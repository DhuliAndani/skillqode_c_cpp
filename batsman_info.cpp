//2
#include<iostream>
using namespace std;
class Batsman
{
    int bcode;
    string bname;
    int innings,notout,runs;
    float batavg;
    public:
    void readdata();
    void calcavg();
    void displaydata();
};
    void Batsman::readdata()
    {
        cout<<"\n enter bcode :-";
        cin>>bcode;
        cout<<"\n name of batsman :-";
        cin>>bname;
        cout<<"\n number of innings :-";
        cin>>innings;
        cout<<"\n batsman remain :- ";
        cin>>notout;
        cout<<"\n runs :- "; 
        cin>>runs; 
    }
   void Batsman::calcavg()
    {
        batavg=runs/(innings-notout);
    }
    void Batsman::displaydata()
    {
        cout<<"\n bcode :-"<<bcode;
        cout<<"\n name of batsman :-"<<bname;
        cout<<"\n number of innings :-"<<innings;
        cout<<"\n batsman remain :- "<<notout;
        cout<<"\n runs :- "<<runs;
        cout<<"\n batavg :-"<<batavg;
    }
int main()
{
    Batsman bman;
    bman.readdata();
    bman.calcavg();
    bman.displaydata();
}