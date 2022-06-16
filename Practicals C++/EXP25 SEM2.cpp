/*Create a class complex having data members int real , img and member function to
print data. Overload Unary operator (-) using friend function such that it
supports –C1 where C1 is the object of class complex. Also define default, parameterized
and copy constructor for the class.
Use the concept of Overloading Unary Operators with friend function.*/
#include<iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
public:
complex()
{
    real = 0;
    imaginary = 0;
}
complex(int r, int i)
{
    real = r;
    imaginary = i;
}
void print()
{
    int img = (imaginary<0) ? (-imaginary) : imaginary;
    cout<<real<<(imaginary<0 ? " - ": " + ")<<"i"<<img<<endl;
}
friend complex operator-(const complex & obj);
};

complex operator-(const complex & obj)
{
    return complex(-(obj.real),-(obj.imaginary));
}
int main()
{
complex c1(11,21);
cout<<"c1 = ";
c1.print();
complex c2 = -c1;
cout<<"c2 = ";
c2.print();
cout<<"\n20CS018-DEV HALVAWALA\n";
return 0;
}
