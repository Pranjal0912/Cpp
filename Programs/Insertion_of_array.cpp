#include<iostream>
using namespace std;

int main()
{
    int n,temp,x,pos;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int A[n];
    // Taking input form the user of the array.
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the number you want to enter in the list:- ";
    cin>>x;
    // Checking at what position should we store the given number.
    for(int i = 0;i<n;i++)
    {
        if(A[i]>x)
        {
            pos = i;
            break;
        }
    } 
    // (IMPORTANT) This loop will start to put the nth element in (n+1)th position starting from last element. 
    for(int i = n;i>pos;i--)
    {
        A[i]=A[i-1];
    }
    // This will assign the required number to the correctly ordered position.
    A[pos]=x;
    // This is for printing the array.
    for(int i =0;i<=n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}



