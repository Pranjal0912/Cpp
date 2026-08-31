#include<iostream>
using namespace std;

int main()
{
   int n,key;
   cout<<"Enter Total number of elements in the array :- ";
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
   {
      cin>>A[i];
   }
   cout<<"Enter the number you want to search in the array :- ";
   cin>>key;
   for(int i =0; i<n;i++)
   {
    if(A[i]==key)
    {   string a;
        if(i+1==1)
        {
            a = "st";
        }
        else if(i+1==2)
        {
            a = "nd";
        }
        else if(i+1==3)
        {
            a = "rd";
        }
        else
        {
            a = "th";
        }
        cout<<key<<" is at "<<i+1<<a<<" place in the array.";
        return 0;
    }
   }
   cout<<"Number not found";
    return 0;   
}