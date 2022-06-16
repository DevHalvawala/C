/*Write a C++ program having class time with data members: hr, min and sec.
Define following member functions.
1)      getdata() to enter hour, minute and second values
2)      putdata() to print the time in the format 11:59:59
3)      default constructor
4)      parameterized constructor
5)      copy constructor
6)      Destructor.
Use 52 as default value for sec in parameterized constructor.
Use the concepts of default constructor, parameterized constructor, Copy
constructor, constructor with default arguments and destructor.*/
#include<iostream>
using namespace std;
class time
{
   int hh,mm,ss;
 public:
   void getdata()
  {
   cout<<"\nEnter Hours :";
   cin>>hh;
   cout<<"Enter Minutes :";
   cin>>mm;
   cout<<"Enter Seconds :";
   cin>>ss;
  }
  void putdata()
  {
      while(ss>59)
      {
          mm++;
          ss=ss-60;
      }
      while(mm>59)
      {
          hh++;
          mm=mm-60;
      }
      cout<<"\n Time is : \n"<<hh<<":"<<mm<<":"<<ss;
  }
  time()
  {
      cout<<"\nDefault Constructor called!";
      hh=0;
      mm=0;
      ss=0;
  }
  time(int h,int m,int s=52)
  {
      cout<<"\nParameterized Constructor called!";
      hh=h;
      mm=m;
      ss=s;
  }
  time(const time &t)
  {
      cout<<"\nCopy Constructor called!";
      hh=t.hh;
      mm=t.mm;
      ss=t.ss;
  }
  ~time()
  {
      cout<<"\nObject deleted";
  }
};

int main()
{
    time t1;
    t1.getdata();
    t1.putdata();

    time t2(20,66,55);
    t2.putdata();

    time t3=t1;
    t3.putdata();

    time t4(t2);
    t4.putdata();
    cout<<"\n20CS018-DEV HALVAWALA\n";
}
