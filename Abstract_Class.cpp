#include<iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;
public:
    virtual int getArea ()=0;
    void setwidth(int w)
    {
        width=w;
    } 
    void setheight(int h)
    {
        height=h;
    }  
};
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return(width * height);
    }
};
class Triangle : public Shape
{
public:
    int getArea()
    {
        return(width * height) /2 ;
    }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setwidth(5);
    Rect.setheight(7);
    cout<<" Total Rectangle Area.. " <<Rect.getArea()<<endl;

    Tri.setwidth(5);
    Tri.setheight(7);
    cout<<" Total Triangle Area.. " <<Tri.getArea()<<endl;
    return 0;

}

