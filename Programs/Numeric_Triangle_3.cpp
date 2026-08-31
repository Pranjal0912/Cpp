#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
     int n;
     cin>>n;
     for ( int i = 1; i <=2*n-1; i++)
     {
               int a = i<=n?n-i:i-n;
               int b =i<=n?i:2*n-i;
               int c = i<=n?i:2*n-i;

               for(int k = 1; k <= a;k++)//This is for the spaces.
               {
                    cout<<"  ";
               }
               for (int j = b; j>=1;j--)//This is for the left and center part of the triangle_1.
               {
                    cout<<j<<" ";
               }

               for (int j = 2; j<=c;j++)//This is for the right part of the triangle_1.
               {
                    cout<<j<<" ";
               }
               
          cout<<endl;
     }
    
     return 0;
}