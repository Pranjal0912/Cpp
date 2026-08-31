#include<iostream>
using namespace std;

int main()
{
     int a[6]={2,6,1,4,5,0};
     cout<<"{";
     for(int i = 0;i <6;i++)
     {  
        string m = i <5?", ":"}";
        cout<<a[i]<<m;
     }
    return 0;   
}