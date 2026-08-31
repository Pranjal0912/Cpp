#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j = 1;j<=n;j++)
    {
     for(int i = 1; i<=2*n-1;i++)
     {
        if((i+j==n+1)||(i-j==n-1)||(j==n))
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
     }
     cout<<"\n";
    }
     return 0;
}