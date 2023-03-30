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

int  Length(struct Node *p)
{   
    int length =0;
    // while(p->next!=head)
    // {
    //   length++;
    //   p = p->next;
    // }

    do
    {
        length++;
        p =p->next;
    } while(p!=head);
    return length;
}

void Insert(struct Node *p, int x, int index)
{
    if (index < 0 && index > Length(head))
         return;

    int i;
    struct Node *t;
    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if (head == NULL)
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

            p->next = t;
            t->next = head;
            head = t;
        } 
    }
    else
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        for (i = 0; i < index-1 ; i++)
            p = p->next;
 
        t->next = p->next;
        p->next = t;
    }
}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};

    Create(A, 6);

    Display(head);
    printf("\n\n");
    Insert(head, 0, 2);
    Display(head);
    
    

    return 0;
}
