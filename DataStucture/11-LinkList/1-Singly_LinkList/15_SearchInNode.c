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

struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return p;

        else
            p = p->next;
    }
    return NULL;
}

struct Node *RSearch(struct Node *p, int key) // Rsearch== Recurssive search.
{
    if (p == NULL)
        return NULL;

    else if (p->data == key)
        return p;
    else
        return RSearch(p->next, key);
}

struct Node *ISearch(struct Node *p, int key) // ISearch ==ImproveSearch
{
    struct Node *q = NULL;

    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};

    Create(A, 6);
    Display(first);
    printf("\n");

    struct Node *Loc = Search(first, 33);
    if (Loc != NULL)
        printf("Key is found %d \n", Loc->data);
    else
        printf("Key is not present in LinkList\n");
    
    Loc = RSearch(first, 45);
    if (Loc != NULL)
        printf("Key is found %d \n", Loc->data);
    else
        printf("Key is not present in LinkList\n");

    Loc = ISearch(first , 22);
    Display(first);


    return 0;
}