#include<iostream>
using namespace std;
// STRUCTURES BASICS.
struct rect
{
    int length;
    int breadth;
};

struct cards
{
    int face;
    int shape;
    int color;
};

int main()
{
    // cards A[4]={{1,0,0},{1,1,0},{1,0,1},{2,0,0}}; 
    // int a=A[0].face;
    // cout<<a;
    rect a={10,5};
    cout<<a.length;
    return 0;
}