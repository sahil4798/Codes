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

int Length(struct Node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}

struct Node *Mid1(struct Node *p)
{
    int l = Length(first);
    int mid = (l + 1) / 2;
    printf("%d\n", mid);
    for (int i = 0; i < mid - 1; i++)
    {
        p = p->next;
    }
    return p;
}

struct Node *Mid2(struct Node *p)
{
    struct Node *q=first;

    while (p)
    {
        p = p->next;
        if (p)
            p = p->next;
        if (p)
            q = q->next;
    }
    return q;
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66 , 77};
    Create(A, 7);

    struct Node *temp = Mid1(first);
    printf("%d\n ",temp->data );
    printf("%u\n " , temp );
    printf("%u\n " , temp->next );
    temp = temp->next;
    printf("%u\n " , temp );

    struct Node *temp2 = Mid2(first);
    printf("%d\n ", temp2->data);
    printf("%u\n " , temp2 );
    printf("%u\n " , temp2->next );
    temp = temp2->next;
    printf("%u\n " , temp2 );

    return 0;
}