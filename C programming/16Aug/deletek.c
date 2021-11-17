#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

void insert(struct node *head, int val){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        head = n;
        return;
    }
    struct node *temp = head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = n;
}

void display(struct node *head){
    struct node *temp = head;
   while (temp != NULL){
       printf("%d->", temp->info);
       temp = temp->link;
   }
   printf("NULL\n");
    
}

void deleteK(struct node *head, int k){
    struct node *temp = head, *prev;
    while (temp != NULL && temp->info % k == 0){
        head = temp->link;
        free(temp);
        temp = head;
    }
    while (temp != NULL){
        while (temp != NULL && temp->info % k != 0) {
            prev = temp;
            temp = temp->link;
        }
    }
    if (temp == NULL)
      return;
    prev->link = temp->link;
    free(temp);
    temp = prev->link;  

}

int main(){
    struct node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    display(head);
    printf("\n");

    //function call
    deleteK(head, 2);
    display(head);
    return 0;
}