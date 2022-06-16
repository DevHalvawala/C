//Library Report Card
#include<iostream>
using namespace std;
class student
{
    int enrollment_no,marks[3];
    char name[20],course[20];
public:
    void getdata()
    {
        cout<<"Enter Enrollment NO. :";
        cin>>enrollment_no;
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter course :";
        cin>>course;
        cout<<"Enter the marks :";

        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void putdata()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+marks[i];
        }
        cout <<"__________Total marks of 3 subjects __________"<<endl;
        cout<<sum<<endl;
    }
};

main()
{
   student s;
   s.getdata();
   s.putdata();
   return 0;
}
