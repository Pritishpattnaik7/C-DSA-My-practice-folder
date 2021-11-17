#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
    int info;
    struct node *prev;
    struct node *next;
} *start;

void createList(int data){
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
}

void displayList(){
    struct node *q = start;
    if (start == NULL){
        printf("List is empty!\n");
        return;
    }
    while (q != NULL){
        printf("%d->", q->info);
        q = q->next;
    }
    printf("NULL\n");
}

int isPrime(int n){
    if (n == 1)
      return 0;
    for (int i=2 ; i<=sqrt(n) ; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1; 
}

void deletePrime(){
    struct node *temp, *q;
    if (isPrime(start->info)){
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return;
    }
    q = start;
    while (q->next->next != NULL){
        if (isPrime(q->next->info)){
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            free(temp);
        }
        q = q->next;
    }
    //last node
    if (isPrime(q->next->info)){
        temp = q->next;
        free(temp);
        q->next = NULL;
        return;
    }
}

int main(){
    int choice;
    int data, n;
    while(1){
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of nodes : ");
            scanf("%d", &n);
            for (int i=0 ; i<n ; i++){
                printf("Enter the %d node : ", i+1);
                scanf("%d", &data);
                createList(data);
            }
            break;
        case 2:
            deletePrime();
            break;
        case 3:
            displayList();
            break;
        case 4:
            exit(1);            
        
        default:
            break;
        }
    }
    return 0;
}