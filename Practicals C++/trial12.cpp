/*Create a base class called Shape. Use this class to store two double type values that could
  be  used  to  compute  the  area  of  figures.  Derived  two  specific  classes  called  triangle
  and rectangle  from  the  base  shape.  Add  to  the  base  class,  a member  function  get_data()
  to initialize base class data members and another member function display() to computer and display
  the area of figures. Make display() as a virtual function and redefine this function in the derived
  classes to suit their requirements. Using these three classes, design a program that  will  accept
  dimensions  of  triangle  or  a  rectangle  interactively,  and  display  the  area. Remember the two
  values given as input will be treated as length of two sides in the case of rectangles, and as base and
  height in the case of triangles.*/
  #include<iostream>
  using namespace std;
  class shape
{
    public:
        double a,b;
        void get_data ()
        {
            cin>>a;
            cin>>b;
        }
        virtual void display_area () = 0;
};

class triangle:public shape
{
    public:
        void display_area ()
        {
            cout<<"Area of triangle :";
            cout<<0.5*a*b<<endl;
        }
};

class rectangle:public shape
{
    public:
        void display_area ()
        {
            cout<<"Area of rectangle :";
            cout<<a*b<<endl;
        }
};

int main()
{
    triangle t;
    shape *st = &t;
    cout<<"Enter base and altitude : ";
    st->get_data();
    st->display_area();

    rectangle r;
    shape *sr = &r;
    cout<<"Enter length and breadth : ";
    sr->get_data();
    sr->display_area();

    cout<<"\n20CS018-DEV HALVAWALA\n";
    return 0;
}
