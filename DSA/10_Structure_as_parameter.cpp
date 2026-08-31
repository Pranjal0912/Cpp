#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

//*****PASS BY VALUE****//
//This function is pass by value so will not change the value of the 'r1' rectangle.
void fun_change(rectangle r,int l,int b)        
{
    r.breadth=b;
    r.length=l;
}

//*****PASS BY REFERENCE****//
/*This function is pass by reference so will change the value of the 'r1' rectangle 
actually,because here instead of creating a copy of this structure,we are giving it
an alias and changing the values in 'fun_change_2' using it.*/
void fun_change_2(rectangle &r,int l,int b)    
{
    r.breadth=b;
    r.length=l;
}

//*****PASS BY ADDRESS****//
// This function being pass by address will also change the real value of the rectangle 'r1'.
void fun_change_3(rectangle *ptr,int l,int b)
{
    ptr->breadth=b;
    ptr->length=l;
}

// Area function.
int area(rectangle r)
{
    return r.breadth*r.length;
}
int main()
{
    rectangle r1={10,5};
    int new_l=40,new_b=15;
    // pass by value.
    fun_change(r1,new_l,new_b);
    cout<<"l = "<<r1.length<<" | b = "<<r1.breadth<<endl;
    cout<<" Area = "<<area(r1)<<endl;
    // pass by reference.
    fun_change_2(r1,new_l,new_b);
    cout<<"l = "<<r1.length<<" | b = "<<r1.breadth<<endl;
    cout<<" Area = "<<area(r1)<<endl;
    // pass by address. 
    new_l=12;
    new_b=7;
    fun_change_3(&r1,new_l,new_b);
    cout<<"l = "<<r1.length<<" | b = "<<r1.breadth<<endl;
    cout<<" Area = "<<area(r1)<<endl;
    return 0;
}