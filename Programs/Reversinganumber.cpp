//I found this algorithm on my own so ggs to that.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n,q1,q2,q3,r1,r2,r3;
     cout<<"Enter any 4 digit number:- ";
     cin>>n;
     q1 = n/1000;
     r1 = n%1000;
     q2 = r1/100;
     r2 = r1%100;
     q3 = r2/10;
     r3 = r2%10;
     cout<<"Reverse of "<<n<<" is "<<r3<<q3<<q2<<q1;

    return 0;
}
