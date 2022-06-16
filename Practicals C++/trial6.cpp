#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;


public:
    void getTime(void);
    void putTime(void);
    void totalTime(Time T1,Time T2);
};

void Time::getTime(void)
{
    cout << "Enter time:"<<endl;

    cout << "Hours : ";
    cin>>hours;
    cout << "Minutes : ";
    cin>>minutes;

}

void Time::putTime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes<< endl;
}

void Time::totalTime(Time T1,Time T2)
{


    this->minutes=T1.minutes+T2.minutes;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;

}


int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    //add two times
    T3.totalTime(T1,T2);
    T3.putTime();

    return 0;
}

