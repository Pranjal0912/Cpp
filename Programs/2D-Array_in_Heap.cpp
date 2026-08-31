/*Creating a 2D array in Heap memory.*/

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    //CREATIION.

    /*STEP_1:- Create a pointer variable that is pointing on an array of pointers.
               The number of pointer variables in this pointer variable will be equal 
               to the number of rows required in the 2D array.*/

    int **arr = new int*[row];//'**' because arr is a pointer to pointer variable.'int*' because array contians ptrs. 

    /*STEP_2;- Create arrays of type 'int'( using the pointers of arr[]), such that the 
               number of elements in each array is equal to the number of columns required
               in the 2D array.*/

    for(int i=0;i<row;i++)//This 'i' will be used to iterate through every pointer.
    {
        arr[i]= new int[col];//Here every pointer will be used to create and array of type 'int'.
    }

    //INPUT

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }

    }

    //OUTPUT

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //DELETION

    /*STEP_1:- First delete the arrays of type 'int' using the pointers of array 'arr[]'*/

    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }
    
    /*STEP_2:- Now delete the array of pointers created initially.*/

    delete []arr;

    return 0;

}