#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n;
     cin>>n;
     for (int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     for( int j = 1; j <= (n-1); j++)
     {
        for( int i = 1; i <= n-j; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
    return 0;
}