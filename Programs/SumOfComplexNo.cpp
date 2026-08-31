#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
    public:
        int r1,r2,im1,im2;
    
    void Get_info()
        {
            cin>>r1>>im1>>r2>>im2;
        }

    void Display()
        {
            cout<<"Sum:"<<r1+r2<<"+"<<im1+im2<<"i"<<endl;
            if(im1-im2>0)
            {
                 cout<<"Difference:"<<r1-r2<<"+"<<im1-im2<<"i"<<endl; 
            }
            else
            {
                 cout<<"Difference:"<<r1-r2<<im1-im2<<"i"<<endl;
            }
        }
};   

int main()
{
        Complex b1;
        b1.Get_info();
        b1.Display();
    
    return 0;
}

