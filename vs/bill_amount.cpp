#include<iostream>
using namespace std;
class Bill
{
    string product;
    double price,qty,rate,amt,dis,disamt,gst,netbill;
    public:
    void setval()
    {
        cout<<"\n Enter Product Name : ";
        cin>>product;
        cout<<"\n Enter Product Price : ";
        cin>>price;
        cout<<"\n Enter Product Qty : ";
        cin>>qty;
    }
    void rateval()
    {
        
        rate=price*qty;
        dis=rate*0.5;
        disamt=rate*0.95;
        gst=disamt*0.18;       
	    netbill=disamt*1.18;
	
	    cout<<"\nprouct\tprice\tqty\trate\tdis\tdisamt\tgst\tnetbill";
	    cout<<"\n"<<product<<"\t"<<price<<"\t"<<qty<<"\t"<<rate<<"\t"<<dis<<"\t"<<disamt<<"\t"<<gst<<"\t"<<netbill;
    }
};
int main()
{
    Bill obj1;
    obj1.setval();
    obj1.rateval();
}








