#include <stdio.h>
#include <stdlib.h>
#include "stack2.h"

struct Node *root = NULL;

void CreatePost(int pos[], int n)
{
    struct Node *t, *p;
    struct Stack st;
    int i = n-1;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = pos[i--];
    t->lchild = t->rchild = NULL;
    root = t;
    p = t;

    while (i >=0)
    {
        if (pos[i] > p->data)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = pos[i--];
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            Push(p);
            p = t;
        }
        else
        {
            if (pos[i] < p->data && IsEmpty() )
            {
                t = (struct Node *)malloc(sizeof(struct Node));
                t->data = pos[i--];
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                p = t;
            }
            else if (pos[i] < p->data && pos[i] > stacktop()->data)
            {
                t = (struct Node *)malloc(sizeof(struct Node));
                t->data = pos[i--];
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                p = t;
            }
            else
                p = Pop();
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

int main()
{

    int A[] = {10, 30, 20, 60, 100, 80, 40};
    CreatePost(A, 7);
    Postorder(root);


    // int A[] = {40, 20, 10, 30, 80, 60, 100};
    // CreatePost(A, 7);
    // Preorder(root);

    return 0;
}