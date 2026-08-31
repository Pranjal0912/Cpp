#include<iostream>
using namespace std;

int main()
{
    int **p = new int*;
    *p = new int;
    **p = 14;
    cout<<**p;
    return 0;
}