#include <iostream>
using namespace std; 
int main()
{
     int MaxNoOfAsterisks;
     cin>>MaxNoOfAsterisks;
     for( int j = 1;j<= 3; j++)
     {
          for(int i = 1;i<=MaxNoOfAsterisks;i++)
          {
               string a =(((i+j)%4==0) || (j==2 && i%4==0))?"* ":"  ";
               cout<<a;
          }
          cout<<endl;
     }
     return 0;
}






