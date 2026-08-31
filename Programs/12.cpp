#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n; 
     cin>>n;
     for (int j=1;j<=2*n;j++)
     {
          int a = j<=n?j-1:2*n-j;
          int b = j<=n?n-(j-1):j-n;
          for(int i =1; i<=a;i++)
          {
               cout<<" ";
          }
          for(int i = 1;i<=b;i++)
          {
               cout<<"* ";
          }
          cout<<endl;
     }
     return 0;
}    