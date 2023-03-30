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
int Count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

void Reverse1(struct Node *p)
{
    int *A = (int *)malloc(Count(first) * sizeof(int));
    int i = 0;

    while (p != NULL)
    {
        A[i] = p->data;
        i++;
        p = p->next;
    }
    i--;
    p = first;
    while (p != NULL)
    {
        p->data = A[i--];
        p = p->next;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q, *r;
    q = r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next =r;
    }
    first =q ;
}

void RReverse(struct Node *p , struct Node *q)
{
    if(p!=NULL)
    {
        // q=p;
        // p =  p->next;
        // RReverse(p , q);
        RReverse(p->next , p);
        p->next = q;
    }
    else
    first = q;
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};
    Create(A, 6);

    Reverse1(first);
    Reverse2(first);
    
    struct Node  *q = NULL;
    RReverse(first , q  );
    Display(first);

    return 0;
}