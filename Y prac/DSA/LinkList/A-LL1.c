#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void Display()
{
    struct Node *p = head;
    while (p)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int count()
{
    int c = 0;
    struct Node *p = head;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = NULL;
    head = last = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Insertion(int pos, int key)
{
    int i;
    struct Node *p = head;

    if (pos > count() + 1 || pos < 1)
    {
        printf("Pos is invalid \n");
    }

    else
    {

        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;

        if (pos == 1)
        {
            t->next = p;
            head = t;
        }
        else
        {
            for (i = 1; i < pos - 1; i++)
                p = p->next;

            t->next = p->next;
            p->next = t;
        }
    }
}

int Delete(int key)
{
    struct Node *p = head, *q = NULL;
    int i, x = -1;

    while (p)
    {
        if (p->data == key)
            break;
        q = p;
        p = p->next;
    }
    if (p == NULL)
        printf("Element is not present \n");

    else
    {
        if (p == head)
        {
            x = p->data;
            head = head->next;
            free(p);
        }

        else
        {
            x = p->data;
            q->next = p->next;
            free(p);
        }
    }
    return x;
}

int IsSorted()
{
    struct Node *p = head;
    while (p->next->next)
    {
        if (p->data > p->next->data)
            return 0;
        p = p->next;
    }
    return 1;
}

int Rissorted(struct Node *p)
{
    int x = 1;
    if (p->next->next != NULL)
    {

        if (p->data > p->next->data)
            x = 0;
        Rissorted(p->next);
    }
    return x;
}

int main()
{

    int A[] = {10, 20, 30, 40, 600, 70, 80, 90};
    Create(A, 8);
    // Display();
    Insertion(1, 0);
    Insertion(6, 50);
    Insertion(11, 100);
    // Insertion(12 , 100);   //pos is Invalid
    Display();

    // printf(" \n Count is  : %d \n", count());

    // printf(" %d  \n ", Delete(0));
    // printf(" %d  \n ", Delete(50));
    // printf(" %d  \n ", Delete(100));
    // Display();

    if (Rissorted(head))
        printf("Is  Sorted \n ");
    else
        printf("Is not Sorted \n ");

    return 0;
}