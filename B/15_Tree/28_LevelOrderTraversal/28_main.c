#include <stdio.h>
#include <stdlib.h>
#include "28_Queue.h"

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
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}
void Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void Levelorder(struct Node *p)
{
    struct Node *t;
    struct Queue q;
    create(&q, 100);

    printf("%d ", p->data);
    enqueue(&q, p);

    while (!IsEmpty(q))
    {
        t = dequeue(&q);
        if (t->lchild)
        {
            printf("%d ", t->lchild->data);
            enqueue(&q, t->lchild);
        }
        if (t->rchild)
        {
            printf("%d ", t->rchild->data);
            enqueue(&q, t->rchild);
        }
    }
}

int main()
{
    TreeCreate();
    // Preorder(root);
    // Inorder(root);
    // Postorder(root);
     Levelorder(root);

    return 0;

}