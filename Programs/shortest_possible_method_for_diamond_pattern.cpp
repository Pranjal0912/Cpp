#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int j =1 ; j<=2*n-1;j++)
    {   
        int m=j<=n?n+j-1:3*n-j-1;
        int c=j<=n?n-j:j-n;
        for(int i = 1;i<=m;i++)
        {
            string a = i<=c?"  ":"* ";
            cout<<a;
        }
        cout<<endl;
    }
    return 0;   
}
