#include<iostream>
using namespace std;

class rectangle
{
    public:             // everything that is inside the class is private by default
        int length;     //---- 2 byte
        int breadth;    //---- 2 byte
    int area()
    {
        return length*breadth;
    }
    int permimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{   
    rectangle r1,r2;   // Object of class rectangle
    r1.length = 10;    // '.' is used for accesing attributes of object
    r1.breadth= 5;
    cout<<r1.area()<<endl;
    
    return 0;
} 