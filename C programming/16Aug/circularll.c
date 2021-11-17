#include <stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
} *last;

void createList(int data){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    if (last == NULL){
        last = temp;
        temp->link = last;
    }
    else{
        temp->link = last->link;
        last->link = temp;
        last = temp;
    } 
}

void traverse(){
    if (last == NULL){
        printf("List is empty!");
    }
    else {
        struct node* temp;
        temp = last->link;
        
        do {
            printf("%d->", temp->info);
            temp = temp->link;
        } while (temp != last->link);
    }
}

void deletell(int data){
    struct node *q, *temp;
    q = last->link;
    if (q->info == data){
        temp = q;
        last->link = temp->link;
        free(temp);
        return;
    }
    while(q->link != last){
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
        q->link = temp->link;
        free(temp);
        last = q;
    }
}

int main(){
    int data, n, choice, del;
    last = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    while(1){
        printf("1 for create list\n");
        printf("2 for Traverse\n");
        printf("3 for delete\n");

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
        default:
            break;
        }
    }
    return 0;
}