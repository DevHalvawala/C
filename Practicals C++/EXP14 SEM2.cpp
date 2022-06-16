/*Write a C++ program having class Batsman.It has private data members: batsman
name, bcode(4 Digit Code Number), innings, not out, runs, batting average. Innings,
not  out  and  runs  are  in  integer  and  batting  average  is  in  float.Define  following
function outside the class using scope resolution operator.
1)      Public member function getdata()to read values of data members.
2)      Public member function putdata()to display values of data members.
3)      Private member functioncalcavg() which calculates the batting average of a
batsman. Also make this outside function inline.
Hint : batting average = runs/(innings -notout)*/
#include<iostream>
using namespace std;
class Batsman
{
  private:
  string batsman_name;
  int bcode,innings,not_out,runs;
  float batting_average;

  public:
  void getdata();
  void putdata();
  float calavg();
}B1;

void Batsman::getdata()
{
 cout<<"Enter Batsman Name:"<<endl;
 cin>>batsman_name;
 cout<<"Enter bcode:"<<endl;
 cin>>bcode;
 cout<<"Enter Innings:"<<endl;
 cin>>innings;
 cout<<"Enter Not Out"<<endl;
 cin>>not_out;
 cout<<"Enter Runs scored:"<<endl;
 cin>>runs;
}

void Batsman::putdata()
{
 cout<<"Enter Batsman Name:"<<batsman_name<<endl;
 cout<<"Enter bcode:"<<bcode<<endl;
 cout<<"Enter Innings:"<<innings<<endl;
 cout<<"Enter Not Out:"<<not_out<<endl;
 cout<<"Enter Runs score:"<<runs<<endl;
 cout<<"Batting average is:" <<B1.calavg()<< endl;
 cout<<"20CS018-DEV HALVAWALA"<<endl;
}
float Batsman::calavg()
{
 return (float (runs)/(innings -not_out));
}
int main()
{
 B1.getdata();
 B1.putdata();
 B1.calavg();
}












