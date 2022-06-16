/*Create a Class Gate for students appearing in Gate (Graduate Aptitude test for
Engineering) exam. There are three examination center Vadodara, Surat, and
Ahmedabad where Gate exams are conducted. A class has data members:
Registration number, Name of student, Examination center. Class also Contains
static data member ECV_Cnt, ECS_Cnt and ECA_Cnt which counts the number of
students in Vadodara, Surat and Ahmedabad exam center respectively. Class
Contains two Member function getdata () which gets all information of students
and counts total students in each exam center and pudata () which prints all
information about the students. Class also contains one static member function
getcount () which displays the total number of students in each examination center.
Write a program for 5 students and display the total number of students in each
examination center. Use static data member, static member function and Array
of Objects.*/
#include<iostream>
using namespace std;

class Gate
{
 public:
 int Registration_no;
 string Student_name,Examination_center;


 void getdata();
 void putdata();
 static int ECV,ECS,ECA;
 static void getcount()
 {
        cout << "Student appear in Ahmedabad center: " << ECA << endl;
        cout << "Student appear in Vadodara center: " << ECV << endl;
        cout << "Student appear in Surat center: " << ECS << endl;
    }
};

int Gate::ECV=0;
int Gate::ECS=0;
int Gate::ECA=0;

void Gate::getdata()
{
 cout<<"Enter Registration Number :"<<endl;
 cin>>Registration_no;
 cout<<"Enter Student Name :"<<endl;
 cin>>Student_name;
 cout<<"Enter Examination Center :"<<endl;
 cin>>Examination_center;

 if(Examination_center=="Ahmedabad")
 {
  ECA++;
 }
 else if(Examination_center=="Vadodara")
 {
  ECV++;
 }
 else if(Examination_center=="Surat")
 {
  ECS++;
 }
}

void Gate::putdata()
{
 cout<<"Enter Registration Number :"<<Registration_no<<endl;
 cout<<"Enter Student Name :"<<Student_name<<endl;
 cout<<"Enter Examination Center :"<<Examination_center<<endl;
}

int main()
{
    Gate student[5];

    for (int i = 0; i < 5; i++)
    {
        student[i].getdata();
    }
    cout << endl << "You Entered...";

    for (int i = 0; i < 5; i++)
    {
        student[i].putdata();
    }
    Gate::getcount();
}






