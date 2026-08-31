#include<iostream>
#include<cmath>
using namespace std;

int Power_calculator(int r,int count)
{
    int p=1;
    while(count>0)
    {
        p = p*r;
        count--;
    }
    return p;
}

int main()
{
    int n,r,sum = 0,count = 0;
    cin>>n;
    int a = n;
    int A[10]={0};
    while(n>0)
    {
        r = n%10;
        n = n/10;
        A[count++]=r;
    }
    for(int i=0;i<count;i++)
    {
        sum+=Power_calculator(A[i],count);
    }
    if(sum==a)
    {
        cout<<a<<" is an Armstrong Number.";
    }
    else
    {
        cout<<a<<" is not an Armstrong Number.";
    }
    return 0;
}