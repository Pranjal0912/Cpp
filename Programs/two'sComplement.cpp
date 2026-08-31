#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char A[n];
    cin>>A;
    char B[n];
    int count = 0;
    int flag=0;
    for(int i = n;i>=0;i--)
    {
        if(A[i]=='0' && flag==1)
        {
            B[n-i]='1';
        }
        else if(A[i]=='1' && flag==0)
        {
            B[n-i]='1';
            flag =1;
        }
        else if(A[i]=='1' && flag==1)
        {
            B[n-i]='0';
        }
        else if(A[i]=='0' && flag==0)
        {
            B[n-i]='0';
        }
    }
    for(int i = n;i>0;i--)
    {
        cout<<B[i];
    }
    return 0;
}

