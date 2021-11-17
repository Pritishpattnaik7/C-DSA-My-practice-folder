//deleting duplicate elements from a singly LL
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
} * start;

void create_list(int data)
{
    struct node *temp, *q;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
        return;
    }
    else
    {
        q = start;
        while (q->link != NULL)
        {
            q = q->link;
        }
        q->link = temp;
    }
}

void deleteDuplicate()
{
    struct node *curr = start;
    struct node *q = NULL, *temp = NULL;
    if (start == NULL)
        return;
    while (curr != NULL)
    {
        temp = curr;
        q = curr->link;
        while (q != NULL)
        {
            if (curr->info == q->info)
            {
                temp->link = q->link;
            }
            else
            {
                temp = q;
            }
            q = q->link;
        }
        curr = curr->link;
    }
}

void displayll()
{
    struct node *q;
    if (start == NULL)
    {
        printf("List is empty!");
        return;
    }
    q = start;
    while (q != NULL)
    {
        printf("%d->", q->info);
        q = q->link;
    }
    printf("NULL\n");
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
    deleteDuplicate();
    printf("Linked list after deleting duplicates : ");
    displayll();
    return 0;
}