#include<iostream>
using namespace std;

void fun(int A[])      //Main Logic for the program.
{
    for(int j = 0;j<7;j++)
    {
        int p=j;
        for(int i = j+1;i<8;i++)
        {
            if(A[p]>A[i])
            {
                p = i;
            }
        }
        int temp = A[p];
        A[p]=A[j];
        A[j]=temp; 
        for(int i =0;i<8;i++)
        {
            string a = i==7?"":" ";
            cout<<A[i]<<a;
        }
        cout<<endl;

    }
}

int main()          
{
    int A[8];
    for(int i= 0;i<8;i++)
    {
        cin>>A[i];
    }
    fun(A);
    return 0;
}