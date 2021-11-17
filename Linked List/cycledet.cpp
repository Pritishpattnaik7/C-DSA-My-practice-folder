//cycle detection and removal in linked list ... Floyd's algo / hare & turtoise algo
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
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

void makeCycle(node* &head , int pos)
{
    node* temp = head;
    node* startnode;

    int ctr=1;
    while(temp->next != NULL)
    {
        if (ctr == pos){
            startnode = temp;
        }
        temp = temp->next;
        ctr++;
    }
    temp->next = startnode;
}

bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow){
            return 1;
        }
    }
    return false;

}

void removeCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
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
    insert(head , 5);
    insert(head , 6);

    makeCycle(head , 3);                                  //cycle is made by the call...
    if (detectCycle(head))                                //cycle detection fun is called...
    {
        cout << "Cycle is present" << endl;
    }
    else{
        cout << "Cycle is NOT present!" << endl;
    }

    removeCycle(head);                                    //Remove cycle fun
    cout << detectCycle(head) << endl;
    display(head);
   
    return 0;
}
