#include<iostream>
#include<string>
using namespace std;
class Shape
{
    string shape;
public:
    void getdata()
    {
        cout<<"Enter the shape :";
        cin>>shape;
    }
    void putdata()
    {
        cout<<"Calculate the Area of shape :-"<<shape<<endl;
    }
};

class Rectangle : public Shape
{
    int a,b;
public:
    void gtdata()
    {
        cout<<"Enter the values of a and b :"<<endl;
        cin>>a>>b;
    }
    void ptdata()
    {
        cout<<"Area of rectangle is :"<<a*b<<endl;
    }
};

class Square : public Rectangle
{
    int x;
public:
    void gdata()
    {
        cout<<"Enter the values of x :"<<endl;
        cin>>x;
    }
    void pdata()
    {
        cout<<"Area of square is :"<<x*x<<endl;
    }
};
main()
{
    Square s;
    Rectangle r;
    Shape sh;
    sh.getdata();
    sh.putdata();
    r.gtdata();
    r.ptdata();
    cout<<endl;
    cout<<endl;
    sh.getdata();
    sh.putdata();
    s.gdata();
    s.pdata();
    cout<<"\n20CS018-DEV HALVAWALA\n";
}
