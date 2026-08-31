#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    rectangle r={10,5};
    rectangle *ptr;
    ptr= &r;
    cout<<(*ptr).length<<endl;
    cout<<ptr->breadth<<endl;
    return 0;
}