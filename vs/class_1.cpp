#include<iostream>
using namespace std;
class Tata
{
    string color;
    public:
    void own_color(string clr)
    {
        color=clr;
    }
    void get_color()
    {
        cout<<"Your Tiago Color is "<<color;
    }
    void tata_motor()
    {
        cout<<"\n Welcome Tata Motors ";
    }
};
int main()
{
    Tata tiago;
    tiago.tata_motor();
    tiago.own_color("Red");
    tiago.get_color();
}