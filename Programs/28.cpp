#include <iostream>
using namespace std; 
int main()
{
     int n;
     cin>>n;
      for(int j =1;j<=2*n-1;j++)
      {
          int a = j<=n?n-j:j-n;
          int b = j<=n?j:2*n-j;
          for(int i = 1;i<=a;i++)
          {
              cout<<"";
          }
          for(int i =1;i<=b;i++)
          {
               cout<<"*";
          }
          cout<<endl;
      }
     return 0;
}