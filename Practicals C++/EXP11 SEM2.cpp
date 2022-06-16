#include<iostream>
using namespace std;

int& tonlarge(int& num1,int& num2)
{
   if(num1 > num2)
   {
       return num1;
   }
   else
   {
       return num2;
   }
}

int main()
{
  int x = 5,y = 10;
  tonlarge(x,y) = 100;
  cout<<"x ="<<x<<endl<<"y ="<<y<<endl;
  cout<<"20CS018-DEV HALVAWALA"<<endl;
  return 0;
}
