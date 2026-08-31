#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int A[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"Element "<<i+1<<":- ";
        cin>>A[i];
    }
    int start=0,end=n-1,mid,key;
    cout<<"Enter the target element:- ";
    cin>>key;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(A[mid] == key)
        {
            cout<<key<<" is at "<<mid+1<<" position.";
            return 0;
        }
        else if(key > A[mid])
        {
            start = mid +1;
        }
        else 
        {
            end = mid -1;
        }
    }
    cout<<"The ceiling element to "<<key<<" is "<<A[start]<<" in the array.";
    return 0;
}

