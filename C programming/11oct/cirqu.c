//q1Implementation of circular queue
#include<stdio.h>

int front = -1 , rear = -1;
#define size 30
int cq[size];

void insertEle(int ele){
    if ((rear == size-1 && front == 0) || (front == rear+1)){
        printf("Overflow!\n");
        return;
    }
    if (front == -1){
        front = 0;
        rear = 0;
    }
    else {
        if (rear == size-1){
            rear = 0;
        }
        else {
            rear++;
        }
    }
    cq[rear] = ele;
}

void deleteEle(){
    if (front == -1 && rear == -1){
        printf("Underflow\n");
        return;
    }
    else if (front == rear){
        printf("The deleted element is : %d\n", cq[front]);
        front = -1;
        rear = -1;
    }
    else {
        if (front == size-1)
          front = 0;
        else 
          front++;  
    }
}

void Display(){
    int i = front;
    if (front <= rear){
        while (i <= rear){
            printf("%d ", cq[i++]);
        }
    }
    else {
        while (i < size-1){
            printf("%d " , cq[i++]);
        }
        i = 0;
        while (i < rear){
            printf("%d " , cq[i++]);
        }
    }
}

int main(){
    printf("\n Press 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element"); 
    int choice , x;
    while (1){
        printf("Enter choice : ");
        scanf("%d" , &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted : ");
            scanf("%d", &x);
            insertEle(x);
            break;

        case 2:
            deleteEle();
            break;

        case 3:
            Display();
            break;

        case 4:
           exit(1);            
        
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;  
}