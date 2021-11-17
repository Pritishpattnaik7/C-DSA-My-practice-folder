#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
} *top = NULL;

void Push(){
    struct node *temp;
    int data;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &data);
    temp->info = data;
    temp->link = top;
    top = temp;
}

void Pop(){
    if (top == NULL){
        printf("stack is empty !");
    }
    else {
        struct node *temp = top;
        top = top->link;
        printf("the popped element is : %d\n", temp->info);
        free(temp);
    }
}

void Traverse(){
    struct node *q;
    if (top == NULL){
        printf("Stack is empty!");
    }
    else{
        q = top;
        while (q != NULL){
            printf("%d->", q->info);
            q = q->link;
        }
        printf("NULL\n");
    }
    
}

int main(){
    printf("1. Push\t\t 2.Pop\t\t 3.Traverse\n");
    int choice;
    while (1){
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: Push();
                break;
        case 2: Pop();
                break;
        case 3: Traverse();
                break;                
        case 4: exit(1); 

        default: printf("Invalid choice !!");
                 break;
        }
    }
    return 0;
}