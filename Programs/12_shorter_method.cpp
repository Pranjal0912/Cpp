#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
    for(int j = 1;j<=2*n;j++)
    {
        int m = j<=n?j-1:2*n-j;
        for(int i = 1;i<=n;i++)
        {
            string a = i<=m?" ":"* ";
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}