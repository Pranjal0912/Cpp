#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the total number of elements desired in the array :-";
    cin>>n;
    float A[n], sum = 0.0,avg;
    for(int i = 0; i<n;i++)//for taking input form the user.
    {
        cout<<"x"<<i+1<<" is =";
        cin>>A[i];
    }
    cout<<"The average of the above array elements is :- \n";
    for(int i = 0; i<n;i++)//for adding every element in the array.
    {
        sum+=A[i];
    }
    avg = sum/n;
    cout<<avg;
    return 0;
}
