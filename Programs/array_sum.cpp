#include<iostream>
using namespace std;

int main()
{  
    int A[]= {2,4,1,6,7,11},sum = 0;
    for(int i = 0; i<6;i++)
    {
         sum+=A[i];
    }
    cout<<sum;
   return 0;
}
