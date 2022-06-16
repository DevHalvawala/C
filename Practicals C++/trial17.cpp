#include <iostream>
using namespace std;
class SwimmingPool
{
private:
    double length = 10;
    double width = 40;
    double depth = 7;
    double vo;
    double Time;
    int hours;
    double rateFillingpool = 10;//(in gallons per minute).
    double rateDrainingpool = 5; //(in gallons per minute).
public:
    SwimmingPool();
   ~SwimmingPool();
    void volume();
    void timeFillingpool();
    void timeDrainingpool();
    void TimetofillPool();
    void AmountWater();
    void TimetodrainPool();
};

SwimmingPool :: SwimmingPool()
{
    double length = 10;
    double width = 40;
    double depth = 7;
}

SwimmingPool :: ~SwimmingPool()
{
    // Destructor.
}

void SwimmingPool :: volume()
{
    cout << "The Volume of Pool is Given as Below :-" << endl;
    vo = length*width*depth;
    cout << "Volume of Swimming pool is= " << vo << "Metercube" << endl;
}
void SwimmingPool :: AmountWater()
{
    cout<< "Amount of water needed to Fill the pool :-" << endl;
    cout << "The Amount of Water required to fill the pool is= " << vo * 7.48 << " " << "Gallons";
}

void SwimmingPool :: TimetofillPool()
{
    cout<< "Information About Time needed to Fill the Pool :-" << endl;
    Time = vo*7.48 / rateFillingpool;
    hours = Time / 60;
    cout << "The Time needed to Fill the Pool is= " << Time << " " << "minutes\n\n";
    cout << "Hours are= " << hours << " " << "h";
}

void SwimmingPool :: TimetodrainPool()
{
    cout<< "Information About Time needed to Drain the Pool :-" << endl;
    cout << "The Time needed to drain Water from the Pool is= " << vo * 7.48 / Time << " " << "Gallons per minute";
}

int main()
{
    SwimmingPool S1;
    S1.SwimmingPool :: volume();
    cout << "\n\n";
    S1.SwimmingPool :: AmountWater();
    cout << "\n\n";
    S1.SwimmingPool :: TimetofillPool();
    cout << "\n\n";
    S1.SwimmingPool :: TimetodrainPool();
    cout << "\n\n";
    cout<<"\n20CS018-DEV HALVAWALA\n";
}
