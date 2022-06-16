#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter The Number Of Lines: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << i * j;
            cout << setw(5);
        }
        cout << "\n";
    }
    cout<<"20CS018-DEV HALVAWALA"<<endl;
}
