#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
     int n; 
     cout<<"Enter the max number of rows";
     cin>>n;
     for(int k = 1; k<=n;k++)
     {
         for ( int j = 1; j<= n; j++)
         {
          cout<<" ";
         }
         
         for ( int i= 1; i <= k;i++)
         {
          cout<<"*";
         }
         cout<<endl;
     }
     for ( int i = 1;i <= n*2; i++)
     {
          for (int k = 1; k <= n;k++)
          {
               cout<<" ";
          }
          
          for (int j = 1; j<=1; j++)
          {
               cout<<"*";
          }
          cout<<endl;
     }
     return 0;
}
