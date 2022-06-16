/*Design and implement a class DayType that implements the day of the week in a program.
The class DayType should store the day, such as Sun for Sunday. The program should be able
to perform the following operations on an object of type DayType:
    a.Set the day.
    b.Print the day.
    c.Return the day.
    d.Return the next day.
    e.Return the previous day.
    f.Calculate and return the day by adding certain days to the current day.*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Daytype
{
    string day[7];
    string d;
    int counter;

public:
    Daytype()
    {
        day[0] = ("monday");
        day[1] = ("tuesday");
        day[2] = ("wednesday");
        day[3] = ("thursday");
        day[4] = ("friday");
        day[5] = ("saturday");
        day[6] = ("sunday");
    }
    void printday()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << (i + 1) << ": " << day[i] << endl;
        }
    }
    void getDay()
    {
        string z;
        cout << "Enter the day (What day is today): " << endl;
        cin>>z;
        d = z;
    }
    void compare()
    {
        for (int i = 0; i < 7; i++)
        {
            if (d == day[i])
                counter = i;
        }
    }
    void PrevNext()
    {

        if (counter > 0)
        {
            cout << "previous day :" << day[counter - 1] << endl;
        }
        else
        {
            cout << "previous day :" << day[6] << endl;
            cout << "today is :" << day[counter] << endl;
        }
        if (counter < 6)
        {
            cout << "next day :" << day[counter + 1] << endl;
        }
        else
        {
            cout << "next day :" << day[0] << endl;
        }
    }
    int getN()
    {
        int tar;
        cout << "Enter the Number: " << endl;
        cin >> tar;
        return tar;
    }
    void F_day(int tarD)
    {
        int l = tarD % 7;
        if ((l + counter) >= 6)
        {
            l = (counter + l) % 7;
            cout << "the day is after " << tarD << " day is :" << day[l] << endl;
        }
        else if (l == 0)
        {
            cout << "the day is after " << tarD << " day is :" << day[counter] << endl;
        }
    }
};
int main()
{
    int tar;
    Daytype day;
    day.printday();
    day.getDay();
    day.compare();
    tar = day.getN();
    day.PrevNext();
    day.F_day(tar);
    system("pause");
    cout<<"\n20CS018-DEV HALVAWALA\n";
}
