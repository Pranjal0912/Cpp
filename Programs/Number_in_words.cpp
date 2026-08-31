#include<iostream>
using namespace std;

void print_name(int n)
{
    int r1;
    while(n>0)
    {
        r1=n%10;
        n=n/10;
     
        switch (r1)
            {
            case 1:
                cout<<" one ";
                break;
            case 2:
                cout<<" Two ";
                break;
            case 3:
                cout<<" Three ";
                break;
            case 4:
                cout<<" Four ";
                break;
            case 5:
                cout<<" Five ";
                break;
            case 6:
                cout<<" Six ";
                break;
            case 7:
                cout<<" Seven ";
                break;
            case 8: 
                cout<<" Eight ";
                break;
            case 9:
                cout<<" Nine ";
                break;
            case 0:
                cout<<" Zero ";
                break;
                }  
    }
}

int main()
{
    int n;
    cin>>n;
    int r;
    int rev=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    print_name(rev);
    return 0;
}