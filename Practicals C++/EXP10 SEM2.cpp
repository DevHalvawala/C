#include<iostream>
using namespace std;

void divide(int a,int b)
{
    if(a%b==0)
    cout<<a<<" is divisible by "<<b<<"."<<endl;
    else
    cout<<a<<" is not divisible by "<<b<<"."<<endl;
}
int divide(int p)
{
    int i,ctr=0;
    for(i=1;i<=p;++i)
    {
        if (p%i==0)
        {
            ctr++;
        }
    }
    if(ctr==2)
    {
        cout<<"Entered number is a prime number."<<endl;
    }
    else
    {
        cout<<"Entered number is not a prime number."<<endl;
    }
}
float divide(float x,float y,float z)
{
    float Average;
    Average=(x+y+z)/3;
    cout<<"Average of above number is :"<<Average<<endl;
}
int main()
{
  int a,b;
  int p,Prime;
  float x,y,z,Avg;
  cout<<"For checking whether the function is divisible or not."<<endl<<endl;
  cout<<"Enter numerator:";
  cin>>a;
  cout<<"Enter denominator:";
  cin>>b;
  divide(a,b);
  cout<<"To Check whether the entered number is prime or not."<<endl<<endl;
  cout<<"Enter the number:";
  cin>>p;
  Prime=divide(p);
  cout<<"To take average of entered three number."<<endl<<endl;
  cout<<"Enter three numbers:";
  cin>>x>>y>>z;
  Avg=divide(x,y,z);


  cout<<"20CS018-DEV HALVAWALA"<<endl;
  return 0;
}
