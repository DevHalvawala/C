#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//.h file code:

#include <string>
#include <vector>
#include <iostream>

class Main
{
public:
static void main(std::vector<std::wstring> &args);
};

//Main function added by Java to C++ Converter:

#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    Main::main(args);
}

//.cpp file code:


void Main::main(std::vector<std::wstring> &args)
{
Scanner sc = new Scanner(System.in);
int t = sc->nextInt();
 while (t-- >0)
 {

	 int n = sc->nextInt();
	 int c = sc->nextInt();
	 int k = sc->nextInt();

	 std::vector<int> arr(n);
	 for (int i = 0;i < n;i++)
	 {
		 arr[i] = sc->nextInt();
	 }
	 int a = 0;

	 for (int i = 0;i < n;i++)
	 {
		 int count = 0, s = 0;
		 for (int x = i;x < n;x++)
		 {
			 count++;
			 s = s + arr[x];
			 if (s <= c && s >= k)
			 {
				 a = std::max(a,count);
			 }
			 else if (s > c)
			 {
				 break;
			 }
		 }
	 }
	 std::wcout << a << std::endl;
 }

	delete sc;
}

