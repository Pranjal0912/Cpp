#include<iostream>
using namespace std;

// Creating Linked_List
struct node
{
    int data;
    node *next;
};

// Function creating that creates the linked list and return the address of the first node of the linked list
node* create_linkedList(int A[], int n)
{
    // Creating the first node
    node *first = new node;
    node *ptr = first;
    first->data=A[0];

    // Creating the rest of the nodes using loop
    for(int i=1;i<n;i++)
    {
        node *temp =  new node;
        temp->data = A[i];
        // Putting a condition for checking whether the node is the last one or not 
        if(i!=n-1)
        {
            // This is done to store the value of the 'temp' in the '*next' of previous
            // node as 'temp' contians the address of the next node to which the previous node's '*next' will be pointing 
            ptr->next = temp;
            // This done to increament the value of 'ptr' pointer so that it points to the next node in the list
            ptr = ptr->next;
        }
        // If so, *next pointer of the last node will store NULL
        else
        {
            ptr->next=temp;
            temp->next=NULL;
        }
    }
    return first;
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    // Creating an array to store the value of 'data' for every node
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    // calling the function and storing the address of the first node in 'p' pointer 
    node *p = create_linkedList(A,n);

    // Printing the linked list.
    while(p)        //loop will keep on working till the value of 'p' pointer is not NULL
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}