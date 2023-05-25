#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        //   t->next = head  ;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}

int Length(struct Node *p)
{
    int length = 0;
    do
    {
        length++;
        p = p->next;
    } while (p != head);
    return length;
}

int Delete(struct Node *p, int pos)
{
    int i, x;
    struct Node *q;
    if (pos < 0 || pos > Length(head))
        return -1;

    else if (pos == 1)
    {
        while (p->next != head)
            p = p->next;

        x = head->data;
        if (p == head)
        {
            free(head);
            head = NULL;
        }
        else
        {
            p->next = head->next;
            //  head = head->next;  ////this line is equvalent as below two line
            free(head);
            head = p->next;
        }
        return x;
    }
    else
    {
        for (i = 0; i < pos - 2; i++)
            p = p->next;
        q = p->next;

        p->next = q->next;
        x = q->data;
        free(q);

        return x;
    }
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};
    Create(A, 6);

    // int A[] = {};
    // Create(A, 0);         //Circular LinkList with zero Nodes;

    printf("Deleted Element : %d \n", Delete(head, 3));
    Display(head);

    return 0;
}