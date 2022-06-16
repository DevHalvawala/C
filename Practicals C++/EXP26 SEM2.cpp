/*Create a class String having character array. Class includes constructor and
required member functions to get and display the object. Overload the operators
+(s3=s1+s2), ==(s1<s2), +=(s1+=s2) for the class.
Use the concept of Overloading Binary Operators.*/
#include <iostream>
using namespace std;
class String
{
public:
char a[50];
int len;
void getdata()
{
cout << "Enter the length of string : " ;
cin >> len;
cout << "Enter the string : " ;

  for (int i = 0; i < len; i++)
  {
  cin >> a[i];
  }
}
void putdata()
{
cout << "\nThe length of string is : " << len << endl;
cout << "Entered string is : ";

  for (int i = 0; i < len; i++)
  {
  cout << a[i];
  }
  cout << endl;
}

String operator+(String s1)
{
String temp;
int i, j, length = 0;
    for (i = 0; i < len; i++)
    {
    temp.a[i] = a[i];
    length++;
    }
j = i;
    for (i = 0; i < s1.len; i++)
    {
    temp.a[j] = s1.a[i]; j++;
    length++;
    }
temp.len = length;
return temp;
}
};
int main()
{
String s1;
s1.getdata();
s1.putdata();
String s2;
s2.getdata();
s2.putdata();
String s3;
s3 = s1 + s2;
s3.putdata();
return 0;
}
