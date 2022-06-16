#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 float num1=5.895,num2=2.674,result;
 result= num1+num2;
 cout<<result<<"(without permission)"\n;
 cout<<fixed<<setprecision(3)<<result<<"(with fixed)"\n;
 cout<<scientific<<setprecision(2)<<result<<"(with scientific)"\n;
 return 0;
}
