#include<iostream>
using namespace std; 

int main()
{
     int n;
     string a;
     cin>>n;
      for(int j = 1; j<=2*n;j++)
      {   if(j<=n)
          {
               for(int i = 1; i<=2*n;i++)
           {    
                a = ((i<=n-(j-1))||(i>=n+j))?"*":" ";
               cout<<a;    
           }
          }
          else
          {    for(int i = 1; i<=2*n;i++)
           {    
                a = (i<=j-n||i>=2*n-((j-n)-1))?"*":" ";
               cout<<a;    
           }
          }
          cout<<endl;
      }
     return 0;
}