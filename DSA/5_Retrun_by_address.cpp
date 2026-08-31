#include<iostream>
using namespace std;

int* array_create(int n)    //It is retruning a pointer variable
{
    int *p = new int[n];    //Making array in heap so that it can be accessed after the fuction is over 
    for(int i=0;i<n;i++)
    {
        p[i]= i+1;
    }
    return p;
}
// 
void print_array(int n,int *arr)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]*5<<" ";
    }
    return;
}
// 
int main()
{
    int n;
    cin>>n;
    int *ptr = array_create(n); // This pointer variable 'ptr' is also pointing at the same address as the pointer created in the array_create() function
    print_array(n,ptr);
    return 0;
}
// 