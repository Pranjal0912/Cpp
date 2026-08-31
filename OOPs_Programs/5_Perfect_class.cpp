#include<iostream>
using namespace std;

// Class........
class rectangle
{
    private: 
        int length;
        int breadth;
    public:
    rectangle(int a,int b);        //Constructor
    rectangle(rectangle &r1);           //Constructor
    void set_length(int l);             //Mutators
    void set_breadth(int b);            //Mutators
    int get_length(){return length;}    //Accessores
    int get_breadth(){return breadth;}  //Accessores
    int area();                         //Facilitators
    int perimeter();                    //Facilitators
    bool isSquare();                    //Inspector
    ~rectangle();                       //Destructor
};

// Functions........

    void rectangle::set_length(int x) 
    {
        length = (x>0)?x:-1*x;
    }

    void rectangle::set_breadth(int x) 
    {
        breadth = (x>0)?x:-1*x;
    }

    rectangle::rectangle(int a=1,int b=1)
    {
        set_length(a);
        set_breadth(b);
    }

    rectangle::rectangle(rectangle &r1)
    {
        length=r1.length;
        breadth=r1.breadth;
    }

    int rectangle::perimeter()
    {  
        return 2*(length+breadth);
    }

    int rectangle::area()
    {
        return length*breadth;
    }

    bool rectangle::isSquare()
    {
        return length==breadth;
    }

    rectangle::~rectangle()
    {
        cout<<"Rectangle destroyed";
    }
// Main function......

int main()
{   int l,b;
    cin>>l>>b;
    rectangle r1(l,b);
    if(r1.isSquare())
    {
        cout<<"It is a square."<<endl;
    }
    else
    {
        cout<<"It is not a square"<<endl;
    }
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    return 0;
} 

