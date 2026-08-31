#include<iostream>
using namespace std;

int A;      // This is a global variable

int & intiallizing_var(int &a)
{
    a = 1004;
    return a;
}

int & return_refference(int &a)     // We just simply retrun the variable that we refferenced
{
    return a;
}

int main()
{
    int n=10;
    cout<<return_refference(n)<<endl;
    return_refference(n)=100;       // Here we can see that the fuction is returning a refference variable which can be used as an L-value also;
    cout<<return_refference(n)<<endl;    

    cin>>A;     
    cout<<A<<endl;
    cout<<intiallizing_var(A)<<endl;
}
