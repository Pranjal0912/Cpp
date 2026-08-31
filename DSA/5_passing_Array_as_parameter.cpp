#include<iostream>
using namespace std;


// IMPORTANT :- array can only be passed by address.
void fun(int a[], int n)    // Instead of using 'a[]' we can also use '*a' as the formal parameter.
{
    a[0]=10;
}
int main()
{
    int n=5;
    int A[n];
    for(int i=0;i<n;i++)
    {
        A[i]=i+1;
    }    
    cout<<A[0]<<endl;
    fun(A,n);
    cout<<A[0]<<endl;
    return 0;
}