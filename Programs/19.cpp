#include<iostream>
using namespace std; 

int main()
{
     int n;
     cin>>n;
     for(int j=1;j<=2*n-1;j++)
     {
          if(j<=n)
          {
               for(int i =1;i<=2*n;i++)
               {
                    string a = i<=j||i>=2*n-(j-1)?"*":" ";
                    cout<<a;
               }
          }
          else
          {
               for(int i =1; i<=2*n;i++)
               {
                    string a = i<=2*n-j||i>=j+1?"*":" ";
                    cout<<a;
               }
          }
          cout<<endl;
     }
     return 0;
}

// Another method for the above question is as follows :-
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int j = 1; j<=2*n-1;j++)
//     {   
//         for(int i=1;i<=2*n;i++)
//         {
//             string a;
//             if (j<=n)
//             {
//                  a = ((i<=j) || (i>=2*n-j+1))?"*":" ";
//             }
//             else
//             {
//                  a= ((i<=2*n-j) || (i>j))?"*":" ";
//             }
//                 cout<<a;
//             }
//         cout<<endl;
//     }   
//     return 0;
// }