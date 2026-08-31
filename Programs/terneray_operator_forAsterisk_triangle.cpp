#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n=5; 
     // cin>>n;
      for ( int j = 1;j <= n;j++)
      {
          for ( int i =1;i<=n;i++)
          {
               string a=i<=n-(n-(j-1))?"  ":" *";
               cout<<a;
          }
          cout<<"\n";
      }
     return 0;
}    