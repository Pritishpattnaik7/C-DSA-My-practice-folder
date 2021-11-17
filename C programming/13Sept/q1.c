//q1: delete nodes divisible by 7 in a doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *Insert(struct node *start, int data){
    struct node *temp, *q;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL){
        temp->prev = NULL;
        start = temp;
    }
    else {
        q = start;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = temp;
        temp->prev = q;
    }
    return start;
}

struct node *createList(struct node *start){
    int n, data;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    for (int i=0 ; i<n ; i++){
        printf("Enter the %d node : ",i+1);
        scanf("%d", &data);
        start = Insert(start, data);
    }
    return start;
}

void deleteNode(struct node *start){
    struct node *temp, *q;
    //check for starting node
    if (start->info % 7 == 0){
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return;
    }
    q = start;
    while (q->next->next != NULL){
        if (q->next->info % 7 == 0){
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            free(temp);
        }
        q = q->next;
    }
    //for last node
    if (q->next->info % 7 == 0){
        temp = q->next;
        free(temp);
        q->next = NULL;
        return;
    }
}

void display(struct node *start){
    struct node *q = start;
    if (start == NULL){
        printf("List is empty!");
        return;
    }
    while (q!=NULL){
        printf("%d->", q->info);
        q = q->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head = NULL;
    printf("Enter the data in the linked list : \n");
    head = createList(head);
    printf("U entered : ");
    display(head);

    deleteNode(head);
    printf("After deletion : ");
    display(head);
    return 0;
}