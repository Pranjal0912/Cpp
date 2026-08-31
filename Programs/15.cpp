#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for ( int j =1 ; j<=2*n-1;j++)
    {
          for( int i = 1; i <= 2*n-1;i++)
          {
               if((i+j==n+1)||(i-j==n-1)||(j-i==n-1)||(i+j==3*n-1))
               {
                 cout<<"*";
               }
               else
               {
                    cout<<" ";
               }
          }
          cout<<endl;
    }
     return 0;
}