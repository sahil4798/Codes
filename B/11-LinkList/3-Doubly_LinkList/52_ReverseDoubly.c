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

void Reverse(struct Node *p)
{
    struct Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;

        p = p->prev;

        if (p != NULL && p->next == NULL)
            first = p;
    }
}

// void Reverse(struct Node *p)
// {
//     struct Node *temp;
//     while(p->next!=NULL)
//     {
//       temp =p->next;
//       p->next = p->prev;
//       p->prev = temp;

//       p = p->prev;

//       if(p->prev ==NULL)
//        first = p;
//     }
// }

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};
    Create(A, 6);

    Reverse(first);
    Display(first);

    return 0;
}