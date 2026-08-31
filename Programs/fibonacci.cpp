#include<iostream>
#include<cmath>
using namespace std;

int main()
{   
    int n,sum = 0;
    cin>>n;
    int a=0,b=1,temp;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int j = 1;j<=n-2;j++)
    {   
        temp=b;
        b=b+a;
        a=temp;
        cout<<b<<" ";
    }
    return 0;
}