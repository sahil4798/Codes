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

int IsSorted(struct Node *p)
{
    int x = -394856;
    while (p != 0)
    {
        if (p->data > x)
        {
            x = p->data;
            p = p->next;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{

    int A[] = {11, 22, 33, 77, 55, 66};

    Create(A, 6);
    Display(first);
    printf("\n");

    if(IsSorted(first))
    printf("IS Sorted \n");
    else
    printf("IS not Sorted \n");

    return 0;
}