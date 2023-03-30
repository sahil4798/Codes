#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} *first = NULL;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

void Create(struct Node **p, int A[], int n)
{
    struct Node *t, *last = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = t->prev = NULL;
    *p = last = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Insert(struct Node **p, int pos, int key)
{
    if (pos < 1 || pos > count(*p) + 1)
        printf("pos is Invalid \n ");

    struct Node *q = *p;
    if (pos == 1)
    {

        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->prev = NULL;
        t->next = *p; // t->next =first;
        *p = t;       // first = t;
    }
    else if (pos > 1 && pos <= count(*p) + 1)
    {
        // printf("Checkpoint 1\n");
        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        for (int i = 1; i < pos - 1; i++)
        {
            q = q->next;
        }
        if (q->next == NULL)
        {
            t->prev = q;
            q->next = t;
            t->next = NULL;
        }
        else
        {

            t->prev = q;
            q->next->prev = t;
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(struct Node **p, int pos)
{
    int x = -1;
    if (pos < 1 || pos > count(*p))
    {
        // printf("Checkpoint 1\n");
        printf(" pos is invalid \n ");
    }

    struct Node *q = *p;
    if (pos == 1)
    {
        struct Node *t = *p;
        *p = t->next;
        t->next->prev = NULL;
        x = t->data;
        t->next = NULL;
        free(t);
    }

    else if (pos > 0 && pos <= count(*p))
    {
        // printf("Checkpoint 1\n");
        struct Node *t = *p;
        for (int i = 1; i < pos; i++)
        {
            t = t->next;
        }
        if (t->next == NULL)
        {
            // printf("Checkpoint 2\n");
            t->prev->next = NULL;
            t->prev = NULL;
            x = t->data;
            free(t);
        }
        else
        {
            // printf("Checkpoint 3\n");
            t->prev->next = t->next;
            t->next->prev = t->prev;
            x = t->data;
            free(t);
        }
    }
    return x;
}

int main()
{
    int A[] = {10, 20, 30, 50, 60, 70};
    Create(&first, A, 6);

    // printf(" size : %d \n", count(first));
    Display(first);

    Insert(&first, 1, 0);
    Insert(&first, 5, 40);
    Insert(&first, 9, 80);
    Display(first);

    // printf("Element on pos=1 was %d \n" , Delete(&first , 1));
    printf("Element on pos=4 was %d \n", Delete(&first, 4));
    Display(first);

    return 0;
}