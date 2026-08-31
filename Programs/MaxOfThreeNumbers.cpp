#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
    int a,b,c;
    cout<<"Enter 3 Numbers:- ";
    cin>>a>>b>>c;
    if ( a>b && a>c)
    {
        cout<<a<<" is Max";
    }
    else if (b>c)
    {
        cout<<b<<" is Max";
    }
    else
    {
        cout<<c<<" is max";
    }
     
     return 0;
}
