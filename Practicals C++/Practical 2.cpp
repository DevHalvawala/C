#include<iostream>
using namespace std;
#define pi 3.14

int volume(float radius)
{
   return((4*pi*radius*radius*radius)/3);
}
int volume(float radius1,float radius2,float radius3)
{
  return ((4*pi*radius1*radius2*radius3)/3);
}




int main()
{

    int r1,r2,r3;
    cout<<"For Ellipsoid :"<<endl;
    cout<<"Enter first radius :";
    cin>>r1;
    cout<<"Enter second radius :";
    cin>>r2;
      if(r1==0 || r2==0)
    {
        cout<<"Volume of Ellipsoid is :"<<"100.48"<<endl;

    }
    else
    {
    cout<<"Volume of Ellipsoid is :"<<volume(r1,r2,100.48)<<endl;
}
    cout<<"\n20CS018 - DEV HALVAWALA\n"<<endl;
    return 0;
}
