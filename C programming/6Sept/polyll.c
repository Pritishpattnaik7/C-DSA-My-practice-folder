#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coef;
    int expo;
    struct node *link;
};

struct node *insert(struct node *start, int co, int ex){
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->coef = co;
    temp->expo = ex;
    if (start == NULL || ex > start->expo){
        //insert at beg
        temp->link = start;
        start = temp;
    }
    else{
        q = start;
        while (q->link != NULL && q->link->expo >= ex){
            q = q->link;
        }
        temp->link = q->link;
        q->link = temp;
    }
    return start;
}

struct node *Create(struct node *start){
    int n, coef, expo;
    printf("Enter the number of terms in the polynomial : ");
    scanf("%d", &n);
    for (int i=0 ; i<n ; i++){
        printf("Enter the coefficient and the exponent : ");
        scanf("%d %d", &coef, &expo);
        start = insert(start, coef, expo);
    }
    return start;
}

void display(struct node *start){
    while (start != NULL){
        printf(" (%dx^%d) ", start->coef , start->expo);
        start = start->link;
        if (start != NULL)
          printf("+");
        else 
          printf("\n");  
    }
}

void polyAdd(struct node *p1, struct node *p2){
    struct node *p3 = NULL;
    while (p1 != NULL && p2 != NULL){
        if (p1->expo > p2->expo){
            p3 = insert(p3, p1->coef, p1->expo);
            p1 = p1->link;
        }
        else if (p2->expo > p1->expo){
            p3 = insert(p3, p2->coef, p2->expo);
            p2 = p2->link;
        }
        else if (p1->expo == p2->expo){
            p3 = insert(p3, p1->coef+p2->coef , p1->expo);
            p1 = p1->link;
            p2 = p2->link;
        }
    }
    while (p1 != NULL){
        p3 = insert(p3, p1->coef, p1->expo);
        p1 = p1->link;
    }
    while (p2 != NULL){
        p3 = insert(p3, p2->coef, p2->expo);
        p2 = p2->link;
    }
    //displaying the sum
    display(p3);
}

void polyMult(struct node *p1 , struct node *p2){
    struct node *p3 = NULL;
    struct node *p2_beg = p2;
    while (p1 != NULL){
        p2 = p2_beg;
        while (p2 != NULL){
            p3 = insert(p3, p1->coef*p2->coef , p1->expo+p2->expo);
            p2 = p2->link;
        }
        p1 = p1->link;
    }
    //displaying the product
    display(p3);
}


int main(){
    struct node *start1 = NULL;
    struct node *start2 = NULL;
    printf("Enter the 1st polynomial : \n");
    start1 = Create(start1);
    printf("Enter the 2nd polynomial : \n");
    start2 = Create(start2);

    //display
    printf("Polynomial 1 : ");
    display(start1);
    printf("Polynomial 2 : ");
    display(start2);

    //operations
    printf("Addition : ");
    polyAdd(start1, start2);
    printf("\n");
    printf("Multiplication : ");
    polyMult(start1, start2);
    return 0;
}