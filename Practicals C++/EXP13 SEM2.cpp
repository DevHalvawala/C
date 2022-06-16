/*Define a C++ StructureRectangle with data member’s width and height.It has
get_values() member functions to get the data from user and  area() member
functions to print the area of rectangle. Also create a C++ Class for the above
program.Define both functions inside the class. Member function defined
inside the class behaves like an inline function and illustrate the difference
between C++ Structure and C++ Class.*/
#include<iostream>
using namespace std;

class rectangle
{
  int width,height;
  public:

  void get_values()
  {
   cout<<"Enter the value for width:";
   cin>>width;
   cout<<"Enter the value for height:";
   cin>>height;

  }
  void area()
  {
   int area = width*height;
   cout<<"AREA ="<<area<<endl;
  }
};

main()
{
 rectangle r;
 r.get_values();
 r.area();
 cout<<"20CS018-DEV HALVAWALA"<<endl;

 return 0;
}
