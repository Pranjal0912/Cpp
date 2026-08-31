#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the total number of elements in first array:- ";
    cin>>n1;
    cout<<"Enter the total number of elements in second array:- ";
    cin>>n2;
    int A[n1];
    int B[n2];
    // Taking input from the user.
    for(int i = 0;i<n1;i++)
    {
        cin>>A[i];
    }
    for(int i = 0;i<n2;i++)
    {
        cin>>B[i];
    }
    //Adding the size of the resulting array before sorting in descending order.
    int temp;
    int n3= n1+n2; 
    int C[n3];
    for(int i = 0;i<n1;i++)
    {
        C[i]=A[i];
    }
    for(int i = n1;i<n3;i++)
    {
        C[i]=B[i-n1];
    }
    // Now using the sorting technique to arrange the array in descendin order.
    for(int j = 0;j<n3;j++)
    {
        for(int i = j+1;i<n3;i++)
        {
            if(C[j]>C[i])
            {
                // Swapping the elements.
                temp = C[i];
                C[i]=C[j];
                C[j]=temp;
            }
        }
    }
    // Now printing the sorted array using loop.
    for(int i = 0;i<n3;i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}


