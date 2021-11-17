#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
} *start;

void createList(int data){
    struct node *temp, *q;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL){
        start = temp;
        return;
    }
    else {
        q = start;
        while (q->link != NULL){
            q = q->link;
        }
        q->link = temp;
    }
}

void traverse(){
    struct node *q;
    if (start == NULL){
        printf("List is empty!");
        return;
    }
    q = start;
    while (q != NULL){
        printf("%d->", q->info);
        q = q->link;
    }
    printf("NULL\n");
}

void deletell(int data){
    struct node *temp, *q;
    if (start->info == data){
        temp = start;
        start = start->link;
        free(temp);
        return;
    }
    q = start;
    while (q->link->link != NULL)
    {
        if (q->link->info == data){
            temp = q->link;
            q->link = temp->link;
            free(temp);
            return;
        }
        q = q->link;
    }
    if (q->link->info == data){
        temp = q->link;
        free(temp);
        q->link = NULL;
        return;
    }
    
}

void reversell(){
    struct node *p1, *p2, *p3;
    if (start->link == NULL){
        printf("Only one node is present in the list!");
    }
    p1 = start;
    p2 = p1->link;
    p3 = p2->link;
    p1->link = NULL;
    p2->link = p1;
    while (p3 != NULL){
        p1 = p2;
        p2 = p3;
        p3 = p3->link;
        p3->link = p1;
    }
    start = p1;    
}



int main(){
    int data, n, choice, del;
    start = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    
    while (1)
    {
        printf("1 for create list\n");
        printf("2 for Traverse\n");
        printf("3 for delete\n");
        printf("4 for reverse");

        printf("Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i=0 ; i<n ; i++){
        printf("Enter the %d node : ", i+1);
        scanf("%d", &data);
        createList(data);
        }
            break;
        case 2:
           printf("Ur Linked list is : ");
           traverse();
           break;
        case 3:
           printf("Enter the node to be deleted : ");
           scanf("%d", &del);
           deletell(del);
           break;
        case 4:
           reversell();
           break;      
        default:
            break;
        }
    }
    
    return 0;
}