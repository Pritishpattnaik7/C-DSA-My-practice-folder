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

node* add2Numbers(node* &head1 , node* &head2)
{
    node* newhead = NULL;
    int sum=0 , carry=0;
    while(head1 != NULL && head2 != NULL)
    {
        sum = head1->data + head2->data + carry;
        if (sum>9)
        {
            carry = sum/10;
            sum = sum%10;
        }
        else
        {
            carry = 0;
        }
        insert(newhead , sum);
        head1 = head1->next;
        head2 = head2->next;  
    }
    while(head1 != NULL)
    {
        sum = head1->data + carry;
        if (sum>9)
        {
            carry = sum/10;
            sum = sum%10;
        }
        else
        {
            carry = 0;
        }
        insert(newhead , sum);
        head1 = head1->next; 
    }
     while(head2 != NULL)
    {
        sum = head2->data + carry;
        if (sum>9)
        {
            carry = sum/10;
            sum = sum%10;
        }
        else
        {
            carry = 0;
        }
        insert(newhead , sum);
        head2 = head2->next; 
    }
    if(carry != 0)
    {
        insert(newhead , carry);
    }
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
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[3] = {2,4,3};
    int arr2[3] = {5,6,4};
    for (int i=0 ; i<3 ; i++)
    {
        insert(head1 , arr1[i]);
    }
    for (int i=0 ; i<3 ; i++)
    {
        insert(head2 , arr2[i]);
    }
    display(head1);
    display(head2);

    node* newhead = add2Numbers(head1 , head2);
    display(newhead);
    return 0;
}