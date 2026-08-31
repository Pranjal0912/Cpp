#include<iostream>
using namespace std;


void swap_1(int a,int b)    // Pass by value
{
    int temp; 
    temp = a;
    a = b;
    b = temp;
    return;
}

void swap_2(int *a,int *b)  // Pass by address
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void swap_3(int &a, int &b) // Pass by refference
{
    int temp = a;
    a = b;
    b = temp;
    return;
}


int main()
{
    int x,y;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    swap_1(x,y);
    cout<<"Pass by value\n"<<"x = "<<x<<endl<<"y = "<<y<<endl;
    swap_2(&x,&y);
    cout<<"Pass by address\n"<<"x = "<<x<<endl<<"y = "<<y<<endl;
    swap_3(x,y);
    cout<<"Pass by refference\n"<<"x = "<<x<<endl<<"y = "<<y<<endl;
    return 0;
}