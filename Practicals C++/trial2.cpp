
//same as trial 3
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class Student
{
public:
    string id, mobile_no, email;
    char name[20];

    void getdata()
    {

        cout << "Enter the Student Name: ";
        cin>>name;
        cout << "Enter the Student Mobile no: ";
        cin >> mobile_no;
        cout << "Enter the Email ID: ";
        cin >> email;
        cout << endl;
    }
    void putdata()
    {
        cout << "Student Name " << name << endl;
        cout << "Student Mobile no: " << mobile_no << endl;
        cout << "Email ID: " << email << endl;
    }
};

class Location : public Student
{
public:
    string state, district;

    void gdata()
    {
        cout << "Enter the State: ";
        cin >> state;
        cout << "Enter the District: ";
        cin >> district;
    }
    void pdata()
    {
        cout << "State: " << state << endl;
        cout << "District: " << district << endl;
    }
};

class Education : public Student
{
public:
    char university_name[50],board_name[4];
    int percentage;
    void gd()
    {
        cout<<"Enter university name :";
        cin>>university_name;
        cout << "Enter the Board (GSEB/CBSE): ";
        cin >> board_name;
        cout << "Enter Your Percentage: ";
        cin >> percentage;
    }
    void pd()
    {
        cout << "University Name :"<<university_name<<endl;
        cout << "Board Name: " << board_name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main()
{

    Student s;
    Location l;
    Education e;
    s.getdata();
    l.gdata();
    e.gd();

    cout << "__________Student Details for Admission__________" << endl;

    s.putdata();
    l.pdata();
    e.pd();

    return 0;
}
