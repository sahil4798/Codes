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
}

void DeleteDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while (q != NULL)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            // free(q);
            q = p->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
}

int main()
{

    int A[] = {11, 33, 33, 44, 55, 55, 55};
    Create(A, 7);

    DeleteDuplicate(first);
    
    Display(first);

    return 0;
}