#include<iostream>
using namespace std;
int x=100;
int main()
{
 int x=80;
 {
  int x=40;
  cout<<"We are in the inner block"<<endl;
  cout<<"Value of x="<<x<<"\n";
  cout<<"Value of x="<<::x<<"\n";
 }
  cout<<"We are in the outer block"<<endl;
  cout<<"Value of x="<<x<<"\n";
  cout<<"Value of x="<<::x<<"\n";
  cout<<"20CS018-DEV HALVAWALA"<<endl;
  return 0;
}
