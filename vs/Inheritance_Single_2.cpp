#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[20];
public:
    void read();
    void display_p();
};
class Student : public Person
{
    int standard,fees;
public:
    void printinfo();
    void display_s();
};
void Person::read()
{
    cout<<"\n Enter Person Name.. " ;
    cin>>name;
}
void Person::display_p()
{
    cout<<"\n Name.. "<<name<<endl;
}
void Student::printinfo()
{
    cout<<"\n Enter Student Standard.. " ;
    cin>>standard;
    cout<<"\n Enter Standard Fees.. ";
    cin>>fees;
}
void Student::display_s()
{

    cout<<" Standard.. "<<standard<<endl;
    cout<<" Fees.. "<<fees<<endl;
}
int main()
{
    Person p;
    Student s;
    p.read();
    s.printinfo();
    p.display_p();
    s.display_s();

}

