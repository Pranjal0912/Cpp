#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
     int n;
     cin>>n;
      for (int j = 1; j <= n; j++)
     {
           for( int k = 1; k <= j-1;k++)
          {
               cout<<" ";
          }
           for (int i = n; i >= j; i--)
          {
                cout<<i-(j-1);
          }
           cout<<endl;
     }
     return 0;
}















