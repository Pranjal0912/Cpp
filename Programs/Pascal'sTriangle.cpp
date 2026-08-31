#include <iostream>
using namespace std;

int main()
{
    int row,c=1;
    cout << "\nDisplay the Pascal's triangle:\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(int i=0;i<row;i++)
    {
        for(int k=1;k<=row-i;k++)
        {
        cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}