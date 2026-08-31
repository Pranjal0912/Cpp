#include <iostream>
#include<cmath>
using namespace std;


int main()
{  
  int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
      if (b>c)
      {
        cout<<"smallest is "<<c<<endl;
        cout<<"greatest is "<<a;
      }
      else
      {
        cout<<"smallest is "<<b<<endl;
        cout<<"greatest is "<<a;
      }
    }
    else if (b>c) 
    {
      if(c>a)
      {
        cout<<"smallest is "<<a<<endl;
        cout<<"greatest is "<<b;
      }
      else
      {
        cout<<"smallest is "<<c<<endl;
        cout<<"greatest is "<<b;
      }
    }
    else if(b>a)
    {
      cout<<"smallest is "<<a<<endl;
      cout<<"greatest is "<<c;
    }
    else
    {
      cout<<"smallest is "<<b<<endl;
      cout<<"greatest is "<<c;
    }
  return 0;
}