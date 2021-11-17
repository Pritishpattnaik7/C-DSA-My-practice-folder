#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head , int val)
{
    node* n = new node(val);

    if(head == NULL)
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

void insertAtHead(node* &head , int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool searchNode(node* head , int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    
    return false;
   
}

void deleteAtHead(node* &head)
{
   node* todelete = head;
   head = head->next;

   delete todelete;
}

void deletion(node* &head , int val)
{
    if (head == NULL)
    {
        return;
    }

    if(head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    while(temp->next->data != val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
    
}

int getCount(node* head)
{
    int ctr=0;
    node* temp = head;

    while(temp != NULL)
    {
        ctr++;
        temp = temp->next;
    }

    return ctr;
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

void f1(node *head){
    if (head == NULL)
      return;
    f1(head->next);
    cout << head->data << " ";  
}

int main()
{
    node* head = NULL;
    insertAtTail(head , 1);                             //inserting at end...
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head,  4);
    display(head);

    f1(head);

    
    return 0;
}