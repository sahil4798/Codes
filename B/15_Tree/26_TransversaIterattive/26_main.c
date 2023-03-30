#include <stdio.h>
#include <stdlib.h>
#include "26_Queue.h"
#include "26_Stack.h"
// #include "26_Stack2.h"

struct Node *root = NULL;

void TreeCreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    root = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value of root : ");
    scanf("%d", &x);
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!IsEmpty(q))
    {
        p = dequeue(&q);

        printf("Enter the value of left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            struct Node *t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter the value of right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            struct Node *t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}


void Preorder(struct Node *p)
{
    struct Stack st;
    StackCreate(&st, 100);

    while (p != NULL || !StackIsEmpty(st))
    {
        if (p != NULL)
        {
            printf("%d ", p->data);
            Push(&st, p);
            p = p->lchild;
        }

        else
        {
            p = Pop(&st);
            p = p->rchild;
        }
    }
}

// void Preorder2(struct Node *p)
// {
//     struct Stack st;
//     StackCreate(100);

//     while (p != NULL || !StackIsEmpty())
//     {
//         if (p != NULL)
//         {
//             printf("%d ", p->data);
//             Push( p);
//             p = p->lchild;
//         }

//         else
//         {
//             p = Pop();
//             p = p->rchild;
//         }
//     }
// }

int main()
{
    TreeCreate();
    Preorder(root);

    return 0;
}