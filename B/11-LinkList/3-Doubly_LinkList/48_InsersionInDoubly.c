#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void Create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;
    last->next = NULL;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Length(struct Node *p)
{
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void Insert(struct Node *p, int index, int element)
{
    int i;
    struct Node *t;

    if (index < 0 || index > Length(first))
        return;

    else if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = element;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = element;

        t->prev = p;
        t->next = p->next;
        p->next = t;
        if (p->next != NULL)
            p->next->prev = t;
    }
}
struct Node *sortedInsert1(struct Node *llist, int data)
{
    struct Node *p = llist, *q = NULL, *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;

    if (p == NULL)
    {
        t->next = NULL;
        t->prev = NULL;
        p = t;
    }

    if (data < p->data)
    {
        t->next = p;
        t->prev = NULL;
        p->prev = t;
        p = t;
        return p;
    }

    else
    {
        q = llist;
        p = llist->next;

        while (q!=NULL)
        {

            if (data < p->data)
            {
                t->next = p;
                t->prev = q;
                q->next = t;
                if (p != NULL)
                {
                    p->prev = t;
                }
                return llist;
                if (p==NULL)
                {
                    t->next = NULL;
                    t->prev = p;
                    p->next = t;
                    return llist;
                }
            }
            printf("hi\n");
            q = p;
            p = p->next;
        }
    }
}



struct Node *sortedInsert2(struct Node *llist, int data)
{
    struct Node *p = llist, *q = NULL, *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;

    if (p == NULL)
    {
        t->next = NULL;
        t->prev = NULL;
        p = t;
    }

    if (data < p->data)
    {
        t->next = p;
        t->prev = NULL;
        p->prev = t;
        p = t;
        return p;
    }

    while (p)
    {

        if (data < p->next->data)
        {
            t->next = p->next;
            t->prev = p;
            if (p->next != NULL)
            {
                p->next->prev = t;
            }
            p->next = t;
            return llist;
        }
        // else if()
        // {
        //     t->next =NULL;
        //     t->prev =p;
        //     p->next =t;
        //     return llist;
        // }

        p = p->next;
    }
}

int main()
{

    int A[] = {11, 22, 33, 50, 70, 90};
    Create(A, 6);
    // Insert(first, 6, 70);
    // Display(first);

    struct Node *temp = sortedInsert1(first, 115);

    Display(temp);

    return 0;
}