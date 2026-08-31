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

        // These 2 getbreadth and getlength are called accessor functions as these functions allows the programer to dislay the values stored inside the private data members of class.
        int getlength()
        {
            return l;
        }
        int getbreadth()
        {
            return b;
        }
       
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
    int len,bre;
    cin>>len>>bre;
    rectangle r1,r2;
    r1.setlength(10);
    r1.setbreadth(5);
    r2.setlength(14);
    r2.setbreadth(3);
    cout<<r2.area()<<endl;
    cout<<r1.area()<<endl;
    return 0;
}
