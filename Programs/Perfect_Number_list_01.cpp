#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
     int n,sum = 0,m;
     cin>>m;
     for (n = 1;n <= m; n++)
     {

        for (int i = 1; i<=n; i++)
        {
            if (n%i == 0)
           {
               sum+=i;
           }
        }
        
        if (sum == (2*n))
        {
           cout<<n<<" is a Perfect Number.\n";
        }
        else
        {
           cout<<n<<" is not a Perfect Number.\n";
        }
        sum = 0;
     }
     return 0;
}
