#include<iostream>
using namespace std;

int min(int m, int n)
{
    return m<n?m:n;
}

int max(int m, int n)
{
    return m>n?m:n;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int (*fp)(int,int);  // Declaration of pointer to the function.
    fp=max; //Initiallization.
    cout<<(*fp)(a,b)<<" ";  //Execution
    fp=min;
    cout<<(*fp)(a,b);   //Execution

}