#include<iostream>
using namespace std;

int main()
{  
    int A[]= {-2,-4,-1,-6,-7,-11},max;
    max = A[0];
    for(int i = 0; i<6;i++)
    {
        if(A[i]>max)
        {
         max = A[i];
        }
    }
    cout<<max;
   return 0;
}
