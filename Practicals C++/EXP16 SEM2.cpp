/*Define  a  class Dist with  int  feet  and  float  inches.  Define  member  function  that
displays distance in 1’-2.5” format. Also define member function scale ( ) function that
takes object by  reference and  scale  factor  in  float  as  an  input  argument. The
function will scale the distance accordingly.
For example, 20’-5.5” and Scale Factor is 0.5 then answer is 10’-2.75”*/

#include<iostream>
using namespace std;

class Dist
{
 int feet;
 float inches;

 public:

 void display()
  {
   cout<<"Enter Feet :";
   cin>>feet;
   cout<<"Enter Inches :";
   cin>>inches;

   while (inches > 12)
        {
            feet = feet + 1;
            inches = inches- 12;
        }
        cout << "Distance: " << feet << "'" << inches << "\"" << endl;
  }
  void scale(Dist &d)
    {
        float sf;
        cout << "Enter scale factor: ";
        cin >> sf;

        feet = feet * sf;
        inches = inches * sf;

        while (inches > 12)
        {
            feet = feet + 1;
            inches = inches - 12;
        }
        cout << "Distance after scale with: " << sf << feet << "'" << inches << "\"" << endl;
    }
};
int main()
{
  Dist d;
  d.display();
  d.scale(d);
  cout<<"\n20CS018-DEV HALVAWALA\n";

  return 0;
}









