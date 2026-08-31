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
      if( j <=n)
    {
          for ( int i = 1; i<=j; i++)
        {
           cout<<"* ";
        }
    }
      else 
    {
           for ( int i = 1;i<=(2*n)-j;i++)
        {
               cout<<"* ";
        }
     }
          cout<<endl;
    }
     return 0;
}