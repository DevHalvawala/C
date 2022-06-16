#include <iostream>
#include <string>
using namespace std;

class Student
{
 int marks;
 public :
 void printmarks(){
 cout<<marks;
 }
 friend class Teacher;
};
class Teacher
{
 string name;
 int employee_id;
 public:
 void getData(){
 cout<<"Teacher Name : ";
 cin>>name;
 cout<<"Employee Id : ";
 cin>>employee_id;
 }
 void putdata(Student &s){
 cout<<"\n\nStudent Detail \nSubject Teacher : "<<name<<"\nTeacher ID : "<<employee_id
<<"\nMarks Of Student : ";
 s.printmarks();
 }
 void setmarks(Student &s){
 int m;
 cout<<"\nEnter Marks Of Student : ";
 cin>>m;
 s.marks = m;
 }
};
int main()
{
 Student s;
 Teacher t;
 t.setmarks(s); t.getData();
 t.putdata(s);
 return 0;
}
