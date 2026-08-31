#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the number you want the table of:- ";
    int n;
    cin>>n;
   for (int i = 1;i<=10;i++)
   {
    cout<<n<<" * "<<i<<" =  "<<n*i<<endl;
   }
    return 0;
}
