//yatharth exam 29/6/21
#include <iostream>
using namespace std;
class Cricketer
{
    char name[20];
    int age, no_matches;
    public:
    void get_c()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout <<"Enter age: ";
        cin>>age;
        cout <<"Enter no. of matches played: ";
        cin>>no_matches;
    }
    void put_c()
    {
        cout<<"Name: "<<name<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"No. of matches played: "<<no_matches<<endl;
    }
};

class Bowler : virtual public Cricketer
{
    float bow_avg;
    int no_wick;
    public:
    void get_b()
    {
        cout<<"Enter bowling average: ";
        cin>>bow_avg;
        cout<<"Enter total number of wickets: ";
        cin>>no_wick;
    }
    void put_b()
    {
        cout<<"Bowling avg.: " <<bow_avg<<endl;
        cout<<"No. of wickets: "<<no_wick<<endl;
    }

};

class Batsmen : public virtual Cricketer
{
    float bat_avg;
    int runs;
    public:
    void get_ba()
    {
        cout<<"Enter batting average: ";
        cin>>bat_avg;
        cout<<"Enter total number of runs: ";
        cin>>runs;
    }
    void put_ba()
    {
        cout<<"Batting avg.: " <<bat_avg<<endl;
        cout<<"No. of runs: "<<runs<<endl;
    }

};

class Allrounder : public Bowler, public Batsmen
{

};
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
     cout<<endl;
     Allrounder a[5];
     int i;
     for(i=0; i<5; i++)
     {
         a[i].get_c();
         a[i].get_b();
         a[i].get_ba();
     }

     for (i=0; i<5; i++)
     {
         a[i].put_c();
         a[i].put_b();
         a[i].put_ba();
     }

     cout<<"\n20CS018 - DEV HALVAWALA\n"<<endl;
    return 0;
}
