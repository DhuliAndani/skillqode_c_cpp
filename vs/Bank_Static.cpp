#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
    int balance;
public:
    static int total_deposite_amt,total_withdraw_amt,total_trans;
    Bank(int balance)
    {
        total_deposite_amt+=balance;
        this -> balance=balance;
    }
    int showBalance()
    {
        return balance;
    }
    int deposite(int deposite)
    {
        total_deposite_amt+=deposite;
        total_trans++;
        balance=balance+deposite;
        return balance;
    }
    int withdraw(int withdraw)
    {
        if (balance > withdraw)
        {
            total_trans++;
            total_withdraw_amt+=withdraw;
            balance=balance-withdraw;
            return balance;
        }
        else
        {
            cout<<"\n Chel Your Balance !!!!!  " ;
            return 1;
        }
        
    }
};
int Bank::total_deposite_amt=0;
int Bank::total_withdraw_amt=0;
int Bank::total_trans=0;

int main()
{
    system ("CLS");
    int ch,dp=0,wt;

    Bank a(100),b(200);
    a.deposite(50);
    b.deposite(50);
    b.withdraw(50);

    cout<<"\n Total Deposite Amount.. " <<Bank::total_deposite_amt;
    cout<<"\n Total Withdraw Amount.. " <<Bank::total_withdraw_amt;
    cout<<"\n Total No. Of Transction.. " <<Bank::total_trans;

    cout<<"\n Balance A.. " <<a.showBalance();
    cout<<"\n Balance B.. " <<b.showBalance();
}