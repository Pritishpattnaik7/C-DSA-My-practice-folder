#include <bits/stdc++.h>
using namespace std;

class node{
    public: 
      int data;
      node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }  
};

void insert(node* &head , int val)
{
    node* n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node* iReverse(node* &head)                       //iterative method...
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node* reverseRecursive(node* &head)                   //recursive method...
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node* head = NULL;
    insert(head , 1);
    insert(head , 2);
    insert(head , 3);
    insert(head , 4);

    display(head);

    node* newhead = reverseRecursive(head);
    display(newhead);

    insert(newhead , 5);
    display(newhead);
    return 0;
}