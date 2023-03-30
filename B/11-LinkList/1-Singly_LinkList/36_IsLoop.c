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

int IsLoop(struct Node *p)
{
    struct Node *q, *r;
    q = r = p;

    do
    {
        q = q->next;
        r = r->next;

        // if (r != NULL)
        //     r = r->next;
        // else
        //     r = r;

        r = r != NULL ? r->next : NULL;
    } while (q && r && q != r);

    if (r == q)
        return 1;
    else
        return 0;

    // return q == r ? 1 : 0;
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};
    Create(A, 6);

    struct Node *p, *q;
    p = first->next->next;
    q = first->next->next->next->next->next;
    q->next = p;

    if (IsLoop(first))
        printf("Loop exists in inlinklist \n  ");
    else
        printf("No loop\n");

    return 0;
}

// why We using do - while loop Can we also use while loop ? ? ? ? ? ? ? ? ? ? ? ? ? ? ;
// while (q && r && q != r)
// {
//     q = q->next;
//     r = r->next;

//     r = r != NULL ? r->next : NULL;
// }
// if (r == q)
//     return 1;
// else
//     return 0;

// }