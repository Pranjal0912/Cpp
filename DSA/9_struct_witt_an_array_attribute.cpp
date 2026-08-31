#include<iostream>
using namespace std;

struct test     //suppose this is a structure describing an array and  the number of elements in it.
{
    int A[4];
    int n;
};

/* Now as we have learned that an array can only be passed by address, but here the structure 
containing an array is passed by value.This is because in pass by value all the attributes of 
the structure gets copied in a new structure including the array.So yes we can say that any array
as a part of a structure can be passed by value*/
void fun(test T)
{
    for(int i =0;i<T.n;i++)
    {
        cout<<T.A[i]<<endl;
    }
}
int main()
{   
    test t1={{1,3,4,5},4};
    fun(t1);
    return 0;
}