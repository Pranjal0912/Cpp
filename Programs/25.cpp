#include <iostream>
using namespace std; 
int main()
{
     int n;
     cin>>n;
      for(int j= 1; j<=n;j++)
      {
          for (int  i =1;i<=n-j;i++)
          {
               cout<<" ";
          }    

          for(int i =1; i <=n;i++)
          {
               string a = (i==1 || j==1 || j==n || i==n)?"*":" ";
               cout<<a;
          }
          cout<<endl;
      }
     return 0;
}