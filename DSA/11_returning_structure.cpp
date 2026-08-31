#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

rectangle* fun()    //This function returns an address of 'rectangle' type.
{
    rectangle *p;
    p = new rectangle;
    p->length=10;
    p->breadth=5;
    return p;
}

int main()
{
    rectangle *ptr = fun();
    cout<<ptr->length<<endl<<ptr->breadth;
    return 0;
}