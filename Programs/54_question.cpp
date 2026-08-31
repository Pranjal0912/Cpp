#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j = 1;j<=n;j++)
    {
        int a =1;
        for(int i=1;i<=n;i++)
        {
            if(i<=n-j)
            {
                cout<<"  ";
            }
            else 
            {
                cout<<a<<" ";
                a*=2;
            }
        }
        int c = pow(2,j-2);
        for(int i=j-1;i>=1;i--)
        {
            cout<<c<<" ";
            c/=2;
        }
        cout<<endl;
    }
    return 0;
}
