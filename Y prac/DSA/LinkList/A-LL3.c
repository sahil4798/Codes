#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head1 = NULL, *head2 = NULL , *third =NULL;

void Display(struct Node *t)
{
    struct Node *p = t;
    while (p)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void Create1(int A[], int n)
{

    int i;
    struct Node *t, *last;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = NULL;
    head1 = last = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Create2(struct Node **p, int A[], int n)
{

    int i;
    struct Node *t, *last;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = NULL;
    *p = last = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// void Merge()
// {
//     struct Node *last ;

//     if (head1->data < head2->data)
//     {
//         third = last = head1;
//         head1 = head1->next;
//         last->next = NULL;
//     }
//     else
//     {
//         third = last = head2;
//         head2 = head2->next;
//         last->next = NULL;
//     }
//     while (head1 && head2)
//     {
//         if (head1->data < head2->data)
//         {
//             last->next = head1;
//             last = head1;
//             head1 = head1->next;
//             last->next = NULL;
//         }
//         else
//         {
//             last->next = head2;
//             last = head2;
//             head2 = head2->next;
//             last->next = NULL;
//         }
//     }
  
//     if(head1)
//     last->next = head1 ;
//     if(head2)
//     last->next =head2;

// }

void Merge(struct Node * p , struct Node *q)
{
    struct Node *last =NULL ;

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
    while (p && q)
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
  
    if(p)
    last->next = p ;
    if(q)
    last->next =q;

}

int main()
{

    int A[] = {10, 30, 50, 60, 70, 100, 110, 600};
    int B[] = {20, 40, 80, 90, 120, 130, 180, 360, 400, 500};

    Create1(A, 8);
    Create2(&head2, B, 10);

    Display(head1);
    Display(head2);
    Merge(head1 , head2);
    Display(third);

    return 0;
}