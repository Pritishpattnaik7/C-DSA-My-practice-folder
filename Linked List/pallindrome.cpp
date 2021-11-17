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

node* Reverse(node* &head)                       
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


bool isPallindrome(node* head)
{
    if (head == NULL || head->next == NULL){
        return true;
    }
    node* slow = head;
    node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = Reverse(slow->next);
    slow = slow->next;

    while(slow != NULL){
        if (head->data != slow->data){
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
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
   int arr[6] = {1,2,3,3,2,1};
    for (int i=0 ; i<6 ; i++){
        insert(head , arr[i]);
    }
    display(head);
    cout << isPallindrome(head) << endl;
    return 0;
}