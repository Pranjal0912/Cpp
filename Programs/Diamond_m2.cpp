#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
    int n; 
    cout<<"Enter the number of rows:- ";
    cin>>n;
      for (int i = 1; i <=(2*n)-1;i++)
     {
          int a = i<=n?n-i:i-n;
          int b = i<=n?2*i-1:(2*((2*n)-i)-1);
          
               for(int k = 1; k<=a; k++)
               {
                    cout<<" ";
               }
               
               for(int j = 1; j<=b; j++)
               {
                    cout<<"*";
               }
          
          cout<<endl;
     }
     
     return 0;
}