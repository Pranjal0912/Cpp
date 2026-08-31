#include<iostream>
using namespace std;

int ** Create2Darray(int row, int col)  // 2-Dimensional Array in Heap.
{
    int ** arr = new int* [row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int [col];
    }
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    return arr;
}

int* create_Array(int n)  // 1-Dimensional Array in heap.
{
    int *A= new int[n];
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
    return A;
}

int main()
{    
    int row,col;
    cin>>row>>col;
    int **arr = Create2Darray(row,col);

    cout<<endl; // Printing the array.
    for(int i=0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    delete []arr; //deleting array from heap.
    arr = nullptr; //deleting the pointer.


    for(int i=0;i<row;i++)  // Checking if the array has been deleted or not.
    {
        for(int j =0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

