#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
struct Node *second = NULL;
struct Node *third = NULL;

void Create1(int A[], int n)
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
void Create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

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

void Catenate(struct Node *p, struct Node *q)
{
    third = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
    second = NULL;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last =NULL;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }

    while (p != NULL && q != NULL)
    {

        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p != NULL)
        last->next = p;
    else
        last->next = q;
}

int main()
{

    int A[] = {2, 5, 15, 18, 26, 30, 56, 60, 70};
    int B[] = {1, 7, 10, 11, 55};
    Create1(A, 9);
    Create2(B, 5);

    // printf("Displaying first linklist \n");
    // Display(first);
    // printf("\n\n");
    // printf("Displaying second linklist \n");
    // Display(second);
    // printf("\n\n");

    // Catenate(first, second);
    // Display(third);
    // printf("\n\n");
   
    Merge(first, second);
    Display(third);

    return 0;
}