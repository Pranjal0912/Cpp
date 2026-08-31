#include<iostream>
using namespace std;

int main()
{
    int n,m,p,q;
    cout<<"Enter the rows and coloumns for A and B:-\n";
    cout<<"---------MATRIX_1---------\n";
    cout<<"Enter n:- ";
    cin>>n;
    cout<<"Enter m:- ";
    cin>>m;
    cout<<"---------MATRIX_2---------\n";
    cout<<"Enter p:- ";
    cin>>p;
    cout<<"Enter q:- ";
    cin>>q;
    if(m==p)
    {
    int A[n][m],B[p][q];
    for(int j = 0; j<n;j++)      //for taking input form the user.
    {
        for(int i = 0;i<m;i++)
        {   
            cout<<"A"<<j+1<<i+1<<" is = ";
            cin>>A[j][i];
        }
    }
    cout<<endl;
    for(int j = 0; j<p;j++)       //for taking input form the user.
    {
        for(int i =0; i<q;i++)
        {   
            int count =1;
            cout<<"B"<<j+1<<i+1<<" is = ";
            cin>>B[j][i];
        } 
    }
    cout<<endl;
    int C[n][q];                //  declaring C array.
    for(int j = 0; j<n;j++)     //initialising very elements of C array as "0".
    {
        for(int i = 0;i<q;i++)
        {
            C[j][i]=0;
        }
    }
    for(int j=0;j<n;j++)        //Main logic for Multiplication.
    {
        for(int i=0;i<q;i++)
        {
            for(int k = 0;k<m;k++)
            {
                C[j][i]+=A[j][k]*B[k][i];       
            }
        }
    }
    for(int j = 0;j<n;j++)      //printing the loop.
    {
        for(int i = 0;i<q;i++)
        {
            cout<<C[j][i]<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"-----------!!!!!!  Multiplication cannot be performed on the following two matrices  !!!!!!-----------";
    }
    return 0;
}

