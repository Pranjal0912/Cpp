#include<iostream>
#include<cmath>
using namespace std;

int getIthbit(int n, int i)
{
    int a=pow(2,i);
    return ((n&a)>0?1:0);

}
void setIthbit(int &n, int i)
{
    int a=(1<<i);
    n = (n|a);
}

int main()
{
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    int i;
    cout<<"Enter the digit:\n";
    cin>>i;
    cout<<getIthbit(n,i);
    setIthbit(n,i);
    cout<<endl<<n;
    return 0;
}