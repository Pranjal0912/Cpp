#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
    int n = 50, sum = 0;
    // cin>>n;
    for ( int i = 1; i <= n; i++)
    {
        if ( n%i == 0)
        {
        sum+=i;
        }
    }
    if (sum == n+1)
    {
        cout<<n<<" is a prime";
    }
    else 
    {
        cout<<n<<" is not a prime";
    }
     return 0;
}
