#include<iostream>
using namespace std;

class rectangle
{
    public:
    int l;
    int b;  
    
        int area()
        {
            return l*b;
        }
        int perimeter()
        {
            return 2*(l+b);
        }
};

int main()
{
    // In this we make a pointer of the class rectangle pointing on an object of class rectangle which is created in heap.
    rectangle *p;
    p = new rectangle;
    p->l=10;
    p->b=5;
    cout<<p->area()<<endl;
    cout<<p->perimeter();

}