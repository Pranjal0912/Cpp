#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a;
  cout<<"Enter any year of your liking. "<<endl;
while(cin>>a)
{
  if (a%4==0)
  {
    if(a%100==0)
    {
      if(a%400==0)
      {
        cout<<"Leap year.\n";
      }
      else
      {
        cout<<"Not a leap year.\n";
      }
    }
    else
    {
      cout<<"Leap year.\n";
    }
  }
  else
  {
      cout<<"Not a leap year.\n";
  }
}
    return 0;
}
