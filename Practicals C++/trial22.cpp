//Write a program that prints the next 20 leap years.
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int doStuff(int a, int b) {
    //your code here

    if(a==b)
    {
     return 2*(a*b);
    }
    else
    {
     return a+b;
    }
}


//boilerplate code
int main() {
	int t;
	cin >> t;
	for(int j=0; j<t; j++){
		int a =1;
		int b =3;
		cin >> a;
		cin >> b;
		cout << doStuff(a, b) << endl;;
	}
	return 0;
}
