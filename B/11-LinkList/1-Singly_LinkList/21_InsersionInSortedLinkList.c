#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
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

void InsersionSorted(struct Node *p, int x)
{
    struct Node *q, *t;
    q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if (p == NULL)
    {
        t->next = NULL;
        p = t;
        // first = t;
    }
    else
    {

        while (p->data < x && p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = p->next;
            p = t;
        }
        else
        {
            // t->next = p;
            // q->next = t;
        
             if (p->next == NULL)
            {
                t->next = p->next;
                p->next = t;
            }
            else
            {
                t->next = q->next; // Same as t->next = p;
                q->next = t;
            }
        }

    }
}

int main()
{

    int A[] = {4, 8, 12, 16, 20, 24};

    Create(A, 6);
    // Create(A, 0);
    // Create(A, 30);
    InsersionSorted(first , 10);
    InsersionSorted(first , 30);
    Display(first);

    return 0;
}