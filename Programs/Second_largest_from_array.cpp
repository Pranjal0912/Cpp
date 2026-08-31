#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
    int max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            temp = i;
        }
    }
    A[temp]=INT16_MIN;
    int max2=A[0];
    for(int i = 0;i<n;i++)
    {
        if(A[i]>max2)
        {
            max2 = A[i];
        }
    }
    cout<<"The second maximum number from the array is:- "<<max2;
    return 0;
}



