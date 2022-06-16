#include<iostream>
#include<string.h>

using namespace std;

//defining class for 24 hour format time
class time_24
{
   private:
      int hour, minute;
   public:
      time_24()
      {
         hour = 0;
         minute = 0;
      }

      time_24(int hrs, int mins)
      {
         hour = hrs;
         minute = mins;
      }

      int returnHour()
      {
          return hour;
      }
      int returnMinute()
      {
          return minute;
      }
      void display()
      {
         cout << hour << ":" << minute ;
      }
};

//class for 12 hour format time
class time_12
{
   private:
      int hour, minute;
      bool pm;
   public:
      time_12()
      {
         hour = 0;
         minute = 0;
      }

      time_12(int hrs, int mins, char *t)
      {
         hour = hrs;
         minute = mins;

         if(strcmp(strupr(t),"PM")==0)
            pm = 0;
         else
            pm = 1;
      }
   //time conversion
   time_12(time_24 time)
   {
      hour = time.returnHour()%12;
      minute = time.returnMinute();

      pm = static_cast<bool>(time.returnHour()/12);
   }
   //operator function for time conversion
   operator time_24()
   {
      int hrs = pm ? hour + 12 : hour;
      int mins = minute;

      return time_24(hrs, mins);
   }

   void display()
   {
      cout << hour << ":" << minute << " " << (pm?"PM":"AM") << endl;
   }
};

int main()
{
   time_24 time24(13,45);
   time_12 time12;
   time12 = time24;

   time_12 t12(12,45,"PM");
   time_24 t24;
   t24 = t12;
   cout << "Time in 12 HRS : ";
   t12.display();
   cout << "Time in 24 HRS : ";
   t24.display();

   cout<<"\n20CS018-DEV HALVAWALA";
   cout << "\n";
   cout << "\n";

   cout << "Time in 24 HRS : ";
   time24.display();
   cout << "\nTime in 12 HRS : ";
   time12.display();
   cout<<"\n20CS018-DEV HALVAWALA";
   return 0;
}
