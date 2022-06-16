/*C++ program to write and read an object in/from a binary file.*/
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const char * filename="BINARY";
main()
{
    float length[5]={12.33,33.5,53.1,43.4,94.19};

    ofstream outfile;
    outfile.open(filename);
    outfile.write((char *)&length,sizeof (length));
    outfile.close();
    for(int i=0;i<5;i++)
    {
        length[i]=0;
    }
    ifstream infile;
    infile.open(filename);
    infile.read((char*)&length,sizeof (length));
    for(int i=0;i<5;i++)
    {
        cout.setf(ios::showpoint);
        cout<<setw(10)<<setprecision(4);
        cout<<length[i];
    }
    infile.close();
    cout<<"\n20CS018-DEV HALVAWALA\n";
    return 0;
}
