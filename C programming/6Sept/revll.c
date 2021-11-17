//reverse singly ll using recursion
#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

struct node *insert(struct node *start, int data){
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL){
        start = temp;
    }
    else {
        q = start;
        while (q != NULL){
            q = q->next;
        }
        q->next = temp;
    }
    return q;
}

struct node *createList(struct node *start){
    int n, data;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    for (int i=0 ; i<n ; i++){
        printf("Enter the data : ");
        scanf("%d", &data);
        start = insert(start, data);
    }
    return start;
}

void display(struct node *start){
    if (start == NULL){
        printf("List is empty!");
        return;
    }
    while (start != NULL){
        printf("%d->", start->info);
        start = start->next;
    }
    printf("\n");
}

void reverseRecursive(struct node* head)                 
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    reverseRecursive(head->next);
    struct node *rev = head->next;
    rev->next = head;
    head->next = NULL;
}

int main(){
    struct node *start = NULL;
    start = createList(start);
    display(start);
    return 0;
}