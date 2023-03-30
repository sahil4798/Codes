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

void SDeleteDublicate()
{
    struct Node *p = head->next, *q = head;
    while (p->next != NULL)
    {
        if (p->data == q->data)
        {
            q->next = p->next;
            p = p->next;
        }
        q = q->next;
        p = p->next;
    }
}

void DeleteDublicate()
{
    struct Node *p = head;
    struct Node *q = NULL;
    struct Node *r = NULL;

    while (p->next->next != NULL)
    {
        r = p;
        q = p->next;
        while (q->next != NULL)
        {
            if (p->data == q->data)
            {
                r->next = q->next;
                q = r->next;
            }
            r = q;
            q = q->next;
        }
        p = p->next;
    }
}

void sortedInsertion(struct Node *p, int key)
{
    struct Node *t, *q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = key;

    if (p == NULL)
    {
        p = t;
        t->next = NULL;
    }
    else
    {
        while (p->data < key && p->next != NULL)

        {
            q = p;
            p = p->next;
        }

        if (p == head)
        {
            t->next = p;
            p = t;
        }
        else
        {
            if (p->next == NULL)
            {
                t->next = p->next;
                p->next = t;
            }
            else
            {
                t->next = q->next; // Same as t->next = p;
                q->next = t;
            }
        }
    }
}

int main()
{

    // int A[] = {10, 10, 20, 30, 60 , 60, 80, 90};  // for SDeleteDublicate
    int A[] = {10, 10, 20, 30, 60 , 70, 80, 60 };  // for DeleteDublicate
    // int A[] = {10, 10, 20, 30, 60, 70, 80, 90};     // for sortedInsertion
    Create(A, 8);
    // Insertion(1, 0);
    // Insertion(6, 50);
    // Insertion(11, 100);
    Display();
    DeleteDublicate();
    Display();

    // sortedInsertion(head , 0);
    // sortedInsertion(head , 40);
    // sortedInsertion(head, 100);
    // Display();

    return 0;
}