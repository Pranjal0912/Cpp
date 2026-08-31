#include<iostream>
using namespace std;

class rectangle
{
    private:
            int l;
            int b;  
    public:
        void setlength(int x) //This is a mutator function for length as it lets the programer to mutate or change private data members of a class.
        {
            l = (x>0)?x:-1*x;
        }

        void setbreadth(int x) //This is a mutator function for breadth as it lets the programer to mutate or change private data members of a class.
        {
            b = (x>0)?x:-1*x;
        }

        // These 2 getBereadth and getLength are called accessor functions as these functions allows the programer to dislay the values stored inside the private data members of class.
        int getlength()
        {
            return l;
        }
        int getbreadth()
        {
            return b;
        }

        // Default argument constructor.
        rectangle(int a=1, int b=1)
        {
            setlength(a);
            setbreadth(b);
        }
        // Copy constructor.
        rectangle(rectangle &r)
        {
           setlength(r.l);
           setbreadth(r.b);
        }
        int area()
        {
            return l*b;
        }
        int perimeter();    // This is just an overview of the function, but we will elaborate it outside the class. 
};

int rectangle::perimeter()  // By doing so we ensure that the perimeter function will not be an inline function.
{
    return 2*(l+b);
}

int main()
{
    int len,bre;
    cin>>len>>bre;
    rectangle r1(len,bre);
    rectangle r2(r1);
    cout<<r2.area();
    cout<<r1.area();
}

/* It is suggested that any function containing a very complex logic should not be an inline function as it can result in a runtime error.
Therefore we can write a function like the perimeter function above by making the scope of the function to its class only. */