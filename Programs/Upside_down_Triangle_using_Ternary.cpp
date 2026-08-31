#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n; 
     cin>>n;
     for ( int j = 1;j<=n;j++)
     {
          for ( int i= 1; i<=2*n-j;i++)
          {
               string a = i<=j-1?"  ":"* ";
               cout<<a;
          }
          
          cout<<endl;
     }
     return 0;
}    