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
        if((i==j)||(i+j==2*n)||(j==1))
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