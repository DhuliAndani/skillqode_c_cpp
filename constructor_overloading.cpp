#include <iostream>
using namespace std;
class Sum
{
    public:
    Sum(int,int);
    Sum(int,int,int);
    Sum(double,double);
    Sum(double,double,double); 
};
Sum::Sum(int a, int b){
    cout<<"Two Para int a+b : "<<a+b<<endl;
}
Sum::Sum(int a, int b, int c){
    cout<<"Three Para int a+b+c : "<<a+b+c<<endl;
}
Sum::Sum(double a, double b){
    cout<<"Two Para Double a+b : "<<a+b<<endl;
}
Sum::Sum(double a, double b, double c){
    cout<<"Three Para Double a+b+c : "<<a+b+c<<endl;
}
int main()
{
    Sum ob1(10.1,20.1);
    Sum ob2(10,5);
    Sum ob3(10,20,30);
    Sum ob4(10.1,20.1,30.1);
}