#include<iostream>
using namespace std;

int main()
{
    int A[2][3];
    int B[2][3];
    int C[2][3];
    
    for(int j=0; j<2; j++)
    {
        for(int i =0 ; i< 3; i++)
        {
            cin>>A[j][i];
        }
        cout<<endl;
    }
    for(int j=0; j<2; j++)
    {
        for(int i =0 ; i< 3; i++)
        {
            cin>>B[j][i];
        }
       cout<<endl;
    }
    for(int j=0; j<2; j++)
    {
        for(int i =0 ; i< 3; i++)
        {
            C[j][i]=A[j][i]+B[j][i];
        }
        cout<<endl;
    }
    for(int j=0; j<2; j++)
    {
        for(int i =0 ; i< 3; i++)
        {
            cout<<C[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
