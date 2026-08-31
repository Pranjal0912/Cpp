#include<iostream>
using namespace std;

int main()
{
    int n,temp,x,pos;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the number you want to enter in the list:- ";
    cin>>x;
    for(int i =0;i<n;i++)
    {
        if(A[i]==x)
        {
            pos = i;
        }
    }
    for(int i=pos;i<n;i++)
    {
        A[i]=A[i+1];
    }
    for(int i =0;i<n-1;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}



