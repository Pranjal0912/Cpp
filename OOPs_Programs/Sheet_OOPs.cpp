#include<iostream>
using namespace std;

int main()
{
    cout<<"-------------------COLLATZ CONJECTURE PROBLEM-----------------"<<endl;
    long long int x;
    cout<<"Input the required number :- ";
    cin>>x;
    cout<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    long long int count =0;
    if(x==1)
    {
        cout<<"Iterations it took to bottle is:- 0";
        return 0;
    }
    while(x!=1)
    {
        if(x%2==0)
        {
            long long int a=x;
            x=x/2;
            count++;
            cout<<count<<". "<<x<<" ==> "<<a<<"/2 gives "<<x<<endl;
        }
        else
        {
            long long int a=x;
            x=(3*x)+1;
            count++;
            cout<<count<<". "<<x<<" ==> "<<"3*"<<a<<" gives "<<x<<endl;
        }
    }
    cout<<endl<<"==> Iterations it took to bottle is:- "<<count<<endl;
    return 0;
}