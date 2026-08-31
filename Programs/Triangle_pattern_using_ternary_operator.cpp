#include<iostream>
#include<cmath>
using namespace std;

int main()
{
      int n ; 
      cout<<"Enter the number of rows required to print:- ";
      cin>>n;
     for ( int j = 1; j <=(2*n)-1; j++)
    {
          int a = (j<=n)?j:2*n-j;
          for (int i =1; i<=a; i++)
          {
               cout<<"* ";
          }
          cout<<endl;
     }
    
     return 0;
}