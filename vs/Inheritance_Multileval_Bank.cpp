#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
    int accountno;
    string accountType;
public:
    void getAccountDetails();
    void displayDetails();
};
class Person : public Bank
{
public:
    string name;
    void read();
    void disply();
};
class Loan : public Person
{
    int loan_no,loan_amount;
public:
    void acceptBalance();
    void displayBalance();
};
void Person::read()
{
    cout<<"\n Account Holder Name.. ";
    cin>>name;
}
void Person::disply()
{
    cout<<"\n Account Holder Name.. "<<name<<endl;
}
void Bank::getAccountDetails()
{
    cout<<"\n Account Number..";
    cin>>accountno;
    cout<<"\n Account Type.. ";
    cin>>accountType;
}
void Bank::displayDetails()
{
    cout<<" Account Number.."<<accountno<<endl;
    cout<<" Account Type.. "<<accountType<<endl;
}
void Loan::acceptBalance()
{
    cout<<"\n Loan Number.. ";
    cin>>loan_no;
    cout<<"\n Loan Amount.. ";
    cin>>loan_amount;
}
void Loan::displayBalance()
{
    cout<<" Loan Number.. " <<loan_no<<endl;
    cout<<" Loan Amount.. " <<loan_amount<<endl;
}
int main()
{
    Bank b;
    Person p;
    Loan l;
    p.read();
    b.getAccountDetails();
    l.acceptBalance();
    p.disply();
    b.displayDetails();
    l.displayBalance();
    return 0;
}