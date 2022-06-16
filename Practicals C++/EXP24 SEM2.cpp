/*Create a class Number having int num as member. The class has input and output
functions.  Overload  unary  operator  (++)  such  that  it  supports  N1=N2++  and
N3=++N1  and  Overload  unary  (-)  such  that  it  supportsN3  = -N3.  Also  define
default,  parameterized  and  copy  constructor  for  the  class.  Also  explain  use
of nameless object in operator overloading.
Use the concept of Overloading Unary Operators.*/
#include<iostream>
using namespace std;
class Number
{
 int n;
 public:
 void getdata();
 void putdata();
 Number()
 {
   cout<<"\nDefault Constructor!";
 }
 Number(int x)
 {
   cout<<"\nParameterized Constructor!";
   n=x;
 }
 Number(const Number &y)
 {
   cout<<"\nCopy Constructor!";
   n=y.n;
 }
 Number operator ++();
 Number operator ++(int);
 Number operator -();
 ~Number()
 {
   cout<<"\nDestructor !";
 }
};

// Concept of Overloading Unary Operator
void Number :: getdata()
{
   cout<<"\nEnter n:";
   cin>>n;
 }
 void Number :: putdata()
 {
   cout<<"\nn is :"<<n;
 }
Number Number :: operator ++()
{
  return Number(n++);
}
Number Number :: operator ++(int)
{
  return Number(++n);
}
Number Number :: operator -()
{
  return Number(-n);
}

int main()
{
  Number N1,N2,N3;
  cout<<"\nFor N2 :";
  N2.getdata();
  N2.putdata();
  N1 = N2++;
  cout<<"\nAnswer for N1=N2++ :";
  N1.putdata();
  cout<<"\n and N2 :";
  N2.putdata();
  N3 = ++N1;
  cout<<"\nAnswer for N3=++N1 :";
  N3.putdata();
  cout<<"\nand N1 :";
  N1.putdata();
  N3= -N3;
  cout<<"\nanswer for N3=-N3 :";
  N3.putdata();

  Number N4 = N1;
  cout<<"\n20CS018-DEV HALVAWALA\n";
  return 0;
}
