#include<iostream>
using namespace std; 

int main()
{
     int n,sum=0;
     cin>>n;
      for(int j =1; j<=n;j++)
      {
          for(int i = 1; i <= j;i++)
          {
               int a = (i+j)%2==0?1:0;
               cout<<a<<" ";
          }
          cout<<endl;
      }
     return 0;
}