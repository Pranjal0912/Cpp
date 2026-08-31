#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,n,m,c,k,l,a;
    cin>>x;
    m=x;
    c=m;
    cin>>n;

    for(int j =1; j<=n;j++)
    {
        k=m%10;
        m=m/10;
    }
    for(int j =1; j<=n+1;j++)
    {
        l=c%10;
        c=c/10;
    }
    a=((l*(pow(10,n)))-(k*(pow(10,n-1))));
    cout<<a;
    return 0;   
}