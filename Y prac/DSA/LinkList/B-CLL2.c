#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void Display(struct Node *p)
{
    struct Node *q = p;

    do
    {
        printf(" %d ", p->data);
        p = p->next;
    } while (p != head); // Same as p!=q

    printf("  \n");
}

int count(struct Node *p)
{
    int c = 0;

    do
    {
        c++;
        p = p->next;
    } while (p != head);

    return c;
}

void Create(struct Node **p, int A[], int n)
{
    int i;
    struct Node *t, *last = NULL;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = NULL;
    last = *p = t;
    last->next = last;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Insertion(struct Node *p, int pos, int key)
{
    if (pos < 1 && pos > count(head) + 1)
        printf("Pos is Invalid \n");

    else
    {
        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        if (pos == 1)
        {
            if (p == NULL)
            {
                t->next = t;
                head = t;
            }
            else
            {
                while (p->next != head)
                {
                    p = p->next;
                }
                t->next = head;
                p->next = t;
                head = t;
            }
        }

        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                p = p->next;
            }
            t->next = p->next;
            p->next = t;
        }
    }
}

int Delete(struct Node *p,  int pos)
{
    int x = -1;
    struct Node *q = NULL;
    if (pos < 1 && pos > count(p))
    {
        printf("pos is invalid \n ");
        return x;
    }

    if (pos == 1)
    {
        if (p == NULL)
        {
            printf("pos is invalid \n ");
            return x;
        }
        while (p->next != head)
        {
            p = p->next;
        }
        x = head->data;

        if (p == head)
        {
            free(head);
            head = NULL;
        }
        else
        {

            p->next = head->next;
            head = head->next;
        }
        return x;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }
        q = p->next;

        p->next = q->next;
        x = q->data;
        free(q);
        return x;
    }
}

// int Delete(struct Node *p, int pos)
// {
//     int i, x;
//     struct Node *q;
//     if (pos < 0 || pos > count(head))
//         return -1;

//     else if (pos == 1)
//     {
//         while (p->next != head)
//             p = p->next;

//         x = head->data;
//         if (p == head)
//         {
//             free(head);
//             head = NULL;
//         }
//         else
//         {
//             p->next = head->next;
//             free(head);
//             head = p->next;
//         }
//         return x;
//     }
//     else
//     {
//         for (i = 0; i < pos - 2; i++)
//             p = p->next;
//         q = p->next;

//         p->next = q->next;
//         x = q->data;
//         free(q);

//         return x;
//     }
// }

int main()
{
    // int A[] = {10, 20, 30, 40, 50};
    // Create(&head, A, 5);

    int A[4];
    Create(&head, A, 0);

    // Display(head);

    // printf(" %d \n ", count(head));

    // Insertion(head, 1, 0);
    // Display(head);

    printf(" %d \n ", Delete(head, 1));
    // printf(" %d \n ", Delete(head, 2));
    // printf(" %d \n ", Delete(head, 5));
    // Display(head);

    return 0;
}