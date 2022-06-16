//C++ program to convert 24 hours time to 12 hours time format
#include<iostream>
#include<cstring>

using namespace std;

//defining class for 24 hour format time
class timeForm24
{
   private:
      int hour, minute;
   public:
      timeForm24()
      {
         hour = 0;
         minute = 0;
      }

      timeForm24(double hrs, int mins)
      {
         hour = hrs;
         minute = mins;
      }

      int returnHour(){return hour;}
      int returnMinute(){return minute;}
      void display()
      {
         cout << hour << ":" << minute << endl;
      }
};

//class for 12 hour format time
class timeForm12
{
   private:
      double hour, minute;
      bool pm;
   public:
      timeForm12()
      {
         hour = 0;
         minute = 0;
      }

      timeForm12(double hrs, double mins, char *t)
      {
         hour = hrs;
         minute = mins;
         if(strcmp(strupr(t),"PM")==00)
            pm = 1;
         else
            pm = 0;
      }
   //time conversion
   timeForm12(timeForm24 time)
   {
      hour = time.returnHour()%12;
      minute = time.returnMinute();
      pm = static_cast<bool>(time.returnHour()/12);
   }
   //operator function for time conversion
   operator timeForm24()
   {
      double hrs = pm ? hour + 12 : hour;
      double mins = minute;
      return timeForm24(hrs, mins);
   }

   void display()
   {
      cout << hour << ":" << minute  << " " << (pm?"PM":"AM") << endl;
   }
};

int main()
{
   timeForm24 time24(12, 45); //creating and assigning value to the object time 24 of class timeForm24
   timeForm12 time12; //creating time12 object of class timeForm12
   time12 = time24; //assigns time12 object to time12 object

   cout << "24 hour time format: ";
   time24.display();
   cout << "Equivalent 12 hour time: ";
   time12.display();

   timeForm12 t12(13, 45, "PM");
   timeForm24 t24;
   t24 = t12;
   cout << "\n12 hour time format: ";
   t12.display();
   cout << "Equivalent 24 hour time: ";
   t24.display();
   cout << "\n";
   return 0;
}
