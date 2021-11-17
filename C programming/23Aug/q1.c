//reverse a doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
} * start;

void createList(int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
        temp->prev = q;
    }
}

void reverse()
{
    struct node *p1, *p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while (p2 != NULL)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
}

void display()
{
    struct node *q = start;
    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    while (q != NULL)
    {
        printf("%d->", q->info);
        q = q->next;
    }
    printf("NULL\n");
}

int main()
{
    start = NULL;
    int data, n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d node : ", i + 1);
        scanf("%d", &data);
        createList(data);
    }
    display();
    reverse();
    printf("The reversed linked list is : ");
    display();
    return 0;
}