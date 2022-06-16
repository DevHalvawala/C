/*Define  a  Base  Class  Vegetable  having  data  member  Color  and  member  function
getdata()  which  takes  color  as  an  input  and  putdata()  which  print  the  color
as  an output.Vegetable  Class    has  one  subclass  named  Tomato  having  data  members
weight  and  size  and  member  function  gtdata()  which  takes  weight  and  size  as  an
input and ptdata()which prints weight and size as output.
Write a C++ Program which inherits the data of Vegetable class in Tomato class using Single Inheritance.*/
#include<iostream>
using namespace std;
class vegetable
{
  string color;
  public:
         void getdata()
         {
          cout<<"Enter the color :"<<endl;
          cin>>color;
         }
         void putdata()
         {
          cout<<"Name of color :"<<color<<endl;
         }
};
class tomato : public vegetable
{
  int weight,Size;
  public:
        void gtdata()
       {
        cout<<"Weight :"<<endl;
        cin>>weight;
        cout<<"Size :"<<endl;
        cin>>Size;
       }
        void ptdata()
       {
        cout<<"Enter Weight :"<<weight<<endl;
        cout<<"Enter Size :"<<Size<<endl;

       }

};

int main()
{
 tomato obj;
 obj.getdata();
 obj.putdata();
 obj.gtdata();
 obj.ptdata();
 cout<<"\n20CS018-DEV HALVAWALA\n";
 return 0;
}
