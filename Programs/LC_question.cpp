#include<iostream>
using namespace std;

void fun(int n)      //Main Logic for the program.
{
    int A[n][n];
    //for taking input.  
    for(int j =0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            cin>>A[j][i];
        }
    }
    for(int j= 0;j<n;j++)
    {
        for(int i = 0;i<n;i++)
        {
            if(A[j][i]==0)
            {
                A[j][i]=-1;
            }
        }
    }
    for(int j = 0;j<n;j++)
    {
        for(int i = 0;i<n;i++)
        {
            if(A[j][i]==-1)
            {
                // for row = 0.
                for(int k =0;k<n;k++)
                {
                    if(A[j][k]!=-1)
                    {
                        A[j][k]=0;
                    }
                }
                // for col = 0.
                for(int k = 0;k<n;k++)
                {
                    A[k][i]=0;
                }
            }
        }
    }
    cout<<"The transformed array is :- \n";
    for(int j = 0;j<n;j++)
    {
        for(int i = 0;i<n;i++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()          
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}