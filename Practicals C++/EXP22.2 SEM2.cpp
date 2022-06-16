#include<iostream>
using namespace std;
class employee
{
public:
void hello()
    {
     cout<<"Hi hello"<<endl;
    }
};
int main()
{
// declaring pointer to member function hello
void (employee ::*fp)()= &employee::hello;
employee e;
employee *optr = &e;
(e.*fp)();
(optr->*fp)();
cout<<"20CS018-DEV HALVAWALA";
return 0;
}
