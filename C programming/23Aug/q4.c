//conver a doubly to circular linked list
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

void circular()
{
    struct node *first = start;
    struct node *q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = start;
    first->prev = q;
}

int main()
{
    int data, n;
    start = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d node : ", i + 1);
        scanf("%d", &data);
        create_list(data);
    }
    printf("Entered Linked list is : ");
    displayll();
    return 0;
}