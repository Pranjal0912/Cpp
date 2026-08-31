#include<iostream>
using namespace std; 

int main()
{
     int MaxNoOfRows;
     cin>>MaxNoOfRows;
      for(int j = 1;j<=MaxNoOfRows;j++)
      {
          for(int i =1; i <= MaxNoOfRows-1;i++)
          {
               string a = (j>=2&&j<=MaxNoOfRows-1&&i>=2&&i<MaxNoOfRows-1)?" ":"*";
               cout<<a;
          }
          cout<<endl;
      }
     return 0;
}