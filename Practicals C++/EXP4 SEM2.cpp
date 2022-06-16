/*Write a C++ program to find out sum of array element using Recursion.
Question:Show stepwise solution of winding and unwinding phase of recursion*/
#include<iostream>
using namespace std;
int SumofArray(int A[],int N)
{
 if(N<=0)
 return 0;
 return(SumofArray(A,N-1)+A[N-1]);
}
int main()
{
    int A[]={21,22,23,24,25};
    int N =sizeof(A)/sizeof(A[0]);
    cout<<("%d",SumofArray(A,N))<<"\n";
    cout<<"20CS018-DEV HALVAWALA"<<endl;
    return 0;
}
