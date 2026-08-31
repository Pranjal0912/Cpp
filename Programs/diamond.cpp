#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
    int NoOfRows;
    cout<<"Enter the Number of rows :- ";
    cin>>NoOfRows;
    for ( int j = 1;j<=NoOfRows;j++)
    {
          for(int i = 1; i<=NoOfRows-j;i++)
          {
               cout<<" ";
          }

          for(int i = 1; i<=2*j-1;i++)
          {
               cout<<"*";
          }
     cout<<endl;
    }

    for (int j =1; j <= NoOfRows-1; j++)
    {
          for (int i = 1; i<=j; i++)
          {
               cout<<" ";
          }
          
          for (int i = 1; i <=2*(NoOfRows-j)-1;i++)
          {
               cout<<"*";
          }
          cout<<endl;
    }
     return 0;
}