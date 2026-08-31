#include <iostream>
using namespace std; 
int main()
{
     int n;
     cin>>n;
     for(int j =1; j<=2*n;j++)
     {
          for( int i = 1;i<=2*n;i++)
          {
               string a = ((i==1)||(i+j==2*n+1)||(i==j||i==2*n))?"*":" ";
               cout<<a;
          }
          cout<<endl;
     }
     return 0;
}