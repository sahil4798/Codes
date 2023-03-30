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

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    Create(&head, A, 5);

    Display(head);
    printf(" %d \n ", count(head));

    Insertion(head , 1 ,0 );
    Display(head);
    // Insertion(head , 3 ,600 );
    // Display(head);
    // Insertion(head , 8 ,800 );
    // Display(head);

    return 0;
}