//Attendance Report Card
#include <iostream>

using namespace std;
class student
{
public:
    string id;
    int attendance;
    getdata()
    {
        cout << "enter student id:";
        cin >> id;
        cout << "enter attendance from 210 days:";
        cin >> attendance;
    }
    int getattendance(string a)
    {
        return ((float)attendance / 210) * 100;
    }
};

main()
{
    student s[2];
    s[0].getdata();
    cout << "attendance is:" << s[0].getattendance(s[0].id) << "\%" << endl;
    s[1].getdata();
    cout << "attendance is:" << s[1].getattendance(s[1].id) << "\%"<< endl;
}
