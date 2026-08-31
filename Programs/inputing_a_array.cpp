#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter Total number of elements in the array :- ";
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
   {
      cin>>A[i];
   }
   cout<<"{";
     for(int i = 0;i<n;i++)
     {
      string m =i<n-1?", ":"}";
      cout<<A[i]<<m;
     }
    return 0;   
}