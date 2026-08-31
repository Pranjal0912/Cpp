#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
     int n,r,rev=0;
     cout<<"Enter any Number:- ";
     cin>>n;
          while (n>0)
          {
               r = n%10;
               n = n/10;
               rev=rev*10 + r;
          }
          cout<<rev;
  
     return 0;
}
// #include<iostream>
// #include<cmath>
// using namespace std; 

// int main()
// {
    
//         int x,r,m,rev = 0;
//         cin>>x;
//         m=x;
//         if(x<0)
//         {
//             x=-x;
//         }
//         while(x>0)
//         {
//              r = x%10;
//              x = x/10;
//             rev = rev*10+r;
//         }
//         if(m<0)
//         {
//             cout<<"-"<<rev;
            
//         }
//         else
//         {
//             cout<<rev;
//         }
            
//      return 0;
// }









