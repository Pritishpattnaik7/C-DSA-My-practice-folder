//ngl in ll
#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
} *start = NULL;

void createList(int data){
    struct node *temp, *q;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL){
        start = temp;
        return;
    }
    q = start;
    while(q->next != NULL){
        q = q->next;
    }
    q->next = temp;
}

void display(){
    struct node *q;
    if (start == NULL){
        printf("List is empty!");
        return;
    }
    q = start;
    while(q != NULL){
        printf("%d ", q->info);
        q = q->next;
    }
    printf("\n");
}

void nextGreater(){
    while(start != NULL){
        if (start <start->next){
            start->info = start->next->info;
            start = start->next;
            return;
        }
        start = start->next;
    }

}

int main(){
    createList(1);
    createList(9);
    createList(8);
    createList(3);
    createList(4);
    createList(6);
    display();

    nextGreater();
    display();
    return 0;
}