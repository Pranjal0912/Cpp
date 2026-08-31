#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    rectangle *ptr = new rectangle;
    ptr->breadth= 10;
    ptr->length= 5;
    cout<<(*ptr).length<<endl;
    cout<<ptr->breadth<<endl;
    return 0;
}