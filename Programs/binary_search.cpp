#include<iostream>
using namespace std;

int main()
{
    int A[10]={1,2,3,7,8,10,32,45,47,50};
    int l=0,h=9,mid,key;
    cin>>key;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(A[mid] == key)
        {
            string a;
            if(mid==0)
        {
            a = "st";
        }
        else if(mid==1)
        {
            a = "nd";
        }
        else if(mid==2)
        {
            a = "rd";
        }
        else
        {
            a = "th";
        }
            cout<<key<<" is at "<<mid+1<<a<<" place";
            return 0;
        }
        else if (A[mid] < key)
        {
            l=mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    cout<<key<<" is not present in the array.";
    return 0;   
}