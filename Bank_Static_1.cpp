/*#include<iostream>
using namespace std;
class Bank{
    
    string name;
    int accbalance,wdbalance,dpbalance;
    public:
    static int totaltracount;
    static int totaldptracount;
    static int totalwdtracount;
    void getdata();
    Bank();
    Bank(int);
    void showAccBalance();
    void setcount(int,int,int);
    void Counter();
    void showAccDetails();
};
void Bank::getdata(){
    cout<<"\n person Name :";
    cin>>name;
}
Bank::Bank(){
    accbalance=1000;
}
Bank::Bank(int initbalance){
    accbalance=initbalance;
}
void Bank:: showAccBalance(){
    cout<<"\n enter account balance: ";
    cin>>accbalance;
    cout<<"\n enter withdraw balance :";
    cin>>wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n\n enter deposite balance :";
    cin>>dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
void Bank::setcount(int x,int y,int z){
    totaltracount=x;
    totaldptracount=y;
    totalwdtracount=z;
 }
void Bank::Counter(){
    totaltracount++;
    totaldptracount++;
    totalwdtracount++;
}
void Bank::showAccDetails(){
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n enter deposite balance :"<<dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
int Bank::totaltracount=0;
int Bank::totaldptracount=0;
int Bank::totalwdtracount=0;
int main()
{
    Bank p[5];
    int i;
    for(i=1;i<=3;i++)
    {
        p[i].getdata();
        p[i].showAccBalance();
        p[i].showAccDetails();
        p[i].setcount(5,2,2);
        p[i].Counter();
    }
    cout<<"\n total Transaction Count :"<<Bank::totaltracount;
    cout<<"\n total Deposite Transaction Count :"<<Bank::totaldptracount;
    cout<<"\n total Withdraw Transaction Count :"<<Bank::totalwdtracount;
}*/






#include<iostream>
using namespace std;
class Bank
{
    public:
    static int accountBalance;
    static int totalTransaction;
    static int totalDepositeTransaction;
    static int totalWithdrawTransaction;
    string name;
   
    
    void getInfo()
    {
        cout<<"\n Enter Account Holder Name... " ;
        cin>>name;
    }
    Bank()
    {
        accountBalance=5000;
        cout<<"\n Account Balance.. " <<accountBalance;
    }
    Bank (int initbal)
    {
        accountBalance = initbal;
    }
    void showAccountDetails()
    {
        cout<<"\n Enter Withdraw Balance.. ";
        cin>>totalWithdrawTransaction;
        cout<<"\n Total Amount : "<<accountBalance - totalWithdrawTransaction;
        cout<<"\n Enter Deposit Balance.. ";
        cin>>totalDepositeTransaction;
        cout<<"\n Total Amount : "<<(accountBalance + totalDepositeTransaction);
        //cout<<"\n Total Amount : "<<(accountBalance - totalWithdrawTransaction) + totalDepositeTransaction;
        //cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
    }
    void setcount(int x,int y,int z)
    {
        totalTransaction=x;
        totalDepositeTransaction=y;
        totalWithdrawTransaction=z;
    }
    void counter()
    {
        accountBalance ++;
        totalTransaction ++;
        totalDepositeTransaction ++;
        totalWithdrawTransaction ++;
        totalTransaction = totalWithdrawTransaction + totalDepositeTransaction;
    }
};
int Bank :: accountBalance=0;
int Bank :: totalTransaction=0;
int Bank :: totalDepositeTransaction=0;
int Bank :: totalWithdrawTransaction=0;

int main()
{
    Bank person1;
    int i;
    for(i=1;i<=2;i++)
    {
        person1.getInfo();
        person1.showAccountDetails();
        person1.counter();
        person1.setcount(2,2,2);
    }
    cout<<"\n Total Transaction Count.. " <<Bank :: totalTransaction;
    cout<<"\n Total Number Of Deposite Transaction Count.. " <<Bank::totalDepositeTransaction;
    cout<<"\n Total Number Of Withdraw Transaction Count.. " <<Bank::totalWithdrawTransaction;






   /* Bank person1;
    person1.getInfo();
    person1.counter();
    person1.showAccountDetails();*/
}
   
