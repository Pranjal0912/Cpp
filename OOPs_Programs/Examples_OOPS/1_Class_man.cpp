#include<iostream>
#include<cmath>
using namespace std;

class man
{
    private:
            int weight;
            int height;
    public:
            void set_weight(int w)     // Mutators
            {
                weight=w>0?w:(-1)*w;
            }
            void set_height(int h)      // Mutators
            {
                if(h>=0 && h<=200)
                {
                    height=h;
                }
                else if(h<0)
                {
                    height = (-1)*h;
                }
                else
                {
                    height = 200;
                }
            }
            int get_weight()       // Acessors
            {
                return weight;
            }
            int get_height()        // Acessors
            {
                return height;
            }
            man(int w=0, int h=0)       //Constructor
            {
                set_weight(w);
                set_height(h);
            }
            man(man &copy_man)      //Copy_Constructor
            {
                set_weight(copy_man.get_weight());
                set_height(copy_man.get_height());
            }
            float calculate_BMI()      //Member_function
            {
                float BMI=(weight/pow(height/100.0,2));
                return BMI;
            }

};

int main()
{
    int w,h;
    cin>>w>>h;
    man m1;
    m1.set_weight(w);
    m1.set_height(h);
    cout<<m1.calculate_BMI()<<" ";
    return 0;
}