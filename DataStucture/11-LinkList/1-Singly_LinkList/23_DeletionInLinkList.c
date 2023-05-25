#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    // } *first = NULL;
};

struct Node *first = NULL; // Createing a Global pointer variable  of Struct Node type and its intially pointing towards NULL

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
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1;
    if (index < 1 && index > Count(first))
    {
        return x;
    }
    // else if (index == 1)
    // {
    //     q = p;
    //     x = p->data;
    //     p = p->next;
    //     free(q);
    //     return x;
    // }
    else if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        while (p != NULL)
        {
            q->next = p->next;
            x = p->data;
            free(p);
            return x;
        }
    }
    return x;
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};

    Create(A, 6);
    printf("%d \n", Delete(first, 1));
    Display(first);

    return 0;
}