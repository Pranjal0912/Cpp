// FOR DEEPER UNDERSTANDING OF THIS PROBLEM SEE THIS VIDEO:- https://www.youtube.com/watch?v=rTrObnHGrMo
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int A[n],V[n];
    // for taking the input form the user.
    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }
    // Now for the main part of the problem.
    for(int j = 0;j<n;j++)
    {
        int count = 1;
        for(int i = j+1;i<n;i++)
        {
            if(A[i]==A[j])
            {
                count++;
                //(IMPORTANT) This is done so that we know that the which element that has come more than once should not be repeated.
                V[i]=-1;
            }
        }
        // Assign every other element which comes only once with the value of their count.
        if(V[j]!=-1)
        {
            V[j]=count;
        }
    }
    for(int i =0;i<n;i++)
    {
        if(V[i]!=-1)//This if condition is important because this will tell the program to cout only those elements who we have visited only once.
        {
            cout<<A[i]<<" appears "<<V[i]<<" times.\n";
        }
    }
    return 0;
}



