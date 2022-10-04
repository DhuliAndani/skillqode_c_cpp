#include<iostream>
using namespace std;
class Student
{
    int rollno,maths,chemistry,physics,total;
    char grade;
    float marks;
    public:
    void studentinformation()
    {
        cout<<"\n enter Roll No : ";
        cin>>rollno;
        cout<<"\t enter Maths Marks : ";
        cin>>maths;
        cout<<"\t enter Chemistry Marks : ";
        cin>>chemistry;
        cout<<"\t enter Physics Marks : ";
        cin>>physics;
    }
    void resultcalculat()
    {
        
        total=maths+chemistry+physics;
        cout<<"\n total::"<<total;
        marks=total/3;
        cout<<"\n percantage::"<<marks;
    }
    void studentper()
    {
    
        if(marks>75)
        {
            cout<<"\n grade : A";
        }
        else if(marks<=75 && marks>60)
        {
            cout<<"\n grade : B";
        }
        else if(marks>60 && marks>45)
        {
            cout<<"\n grade : C";
        }
        else if(marks>45 && marks>35)
        {
            cout<<"\n grade : D";
        }
        else if(marks<=35)
        {
            cout<<"\n grade : FAIL";
        }

    }
};
int main()
{
    Student obj1;
    obj1.studentinformation();
    obj1.resultcalculat();
    obj1.studentper();
} 