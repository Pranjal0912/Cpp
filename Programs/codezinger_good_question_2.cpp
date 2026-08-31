#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int x,n,sum=0,fact=1;
   cin>>x;
   cin>>n;
   
   for(int i = 1;i<=n;i++)
   {
    for(int j =1;j<=2*(i-1);j++)
    {
        fact=fact*j;
    }
    if(i==1)
    {
        sum=x;
    }
    else
    {
    sum+=(pow(-1,i-1))*((pow(x,2*(i-1))/fact));
    fact=1;
    }
   } 
    cout<<sum;
    return 0;   
}