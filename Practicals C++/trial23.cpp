/*Given a number from 1 to 4 (inclusive), return a word representation of the number.
For example, given 2, return two. If the number is greater than 4, return the phrase too large.
If the number is less than 1, return the phrase too small.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int x ,too_small,too_large,i;
cout<<"Enter value of x = ";
cin>>x;
if(x<=0)
{
 cout<<"too_small";
 return too_small;
}
 else if(0<x<=4)
{
 return x;
}
else
{
 cout<<too_large;
 return too_large;

}
}
