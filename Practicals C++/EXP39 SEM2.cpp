#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
int main()
{
fstream fp;
char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "Open file and store characters" << endl;
int len = strlen(str);
fp.open("CS.txt", ios::out);
for (int i = 0; i < len; i++)
{
fp.put(str[i]);
}
fp.close();
fp.open("CS.txt", ios::in);
cout << "Reading from file:" << endl;
fp.seekg(-1, ios::end);
char ch;
while (fp.tellg() >= 0)
{
fp.get(ch);
cout << ch;
fp.seekg(-2, ios::cur);
}
fp.close();
cout<<"\n20CS018-DEV HALVAWALA\n";
return 0;
}
