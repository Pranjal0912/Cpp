#include<iostream>
using namespace std; 

int main()
{
     int n,sum=0;
     cin>>n;
      for(int j = 1;j<=n;j++)
      {
          for(int i = 1;i<=j;i++)
          {
               sum+=1;
               cout<<sum<<" ";
          }
          cout<<endl;
      }
     return 0;
}