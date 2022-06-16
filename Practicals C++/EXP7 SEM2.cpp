#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Size of Array: " << endl;
    cin >> n;

    int *ptr = new int;

    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    cout << "The Elements after Adding +2 are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] + 2 << endl;
    }
    delete[] ptr;
    cout<<"20CS018-DEV HALVAWALA"<<endl;
}
