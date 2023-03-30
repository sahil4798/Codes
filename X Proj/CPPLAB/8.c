#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Transversal(struct node *head)
{

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

struct node *Search(struct node *p, int element)
{
    struct node *q = NULL;

    while (p != NULL)
    {
        if (p->data == element)
        {
            q = p;
            return q;
        }

        else
        {
            p = p->next;
        }
    }

    return q;
}

int main()
{
    struct node *first, *second, *third, *forth, *fifth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    forth->data = 40;
    fifth->data = 50;
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    Transversal(first);
    printf("\n");

    struct node *q = Search(first, 20);
    printf("%d \n", q->data);
    printf("%u \n", q);

    return 0;
}