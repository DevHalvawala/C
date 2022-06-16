#include<iostream>
using namespace std;
class NUM
{
 int a,b;
 public:
 void getdata();
 void putdata();
 NUM()
 {
   cout<<"\nDefault Constructor!";
 }
 NUM(int x,int z)
 {
   cout<<"\nParameterized Constructor!";
   a=x;
   b=z;
 }
 NUM(const NUM &y)
 {
   cout<<"\nCopy Constructor!";
   a=y.a;
   b=y.b;
 }
 NUM operator -();
 NUM operator ==();
 ~NUM()
 {
   cout<<"\nDestructor !";
 }
};


void NUM :: getdata()
{
   cout<<"\nEnter a and b:";
   cin>>a>>b;
 }
 void NUM :: putdata()
 {
   cout<<"\na and b is :"<<a<<b;
 }


NUM NUM :: operator -()
{
  return NUM();
}

int main()
{
  NUM N1,N2,N3;
  cout<<"\nFor N3 :";
  N2.getdata();
  N2.putdata();
  N3=N1-N2;

  cout<<"\n20CS018-DEV HALVAWALA\n";
  return 0;
}

