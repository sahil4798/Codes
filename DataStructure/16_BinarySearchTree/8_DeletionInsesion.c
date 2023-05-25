#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;

struct Node *RInseret(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if (key < p->data)
        p->lchild = RInseret(p->lchild, key);

    else if (key > p->data)
        p->rchild = RInseret(p->rchild, key);

    else
        return p;
}

int Height(struct Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;

    x = Height(p->lchild);
    y = Height(p->rchild);

    return x > y ? x + 1 : y + 1;
}

struct Node *InPre(struct Node *p)
{
    while (p != NULL && p->rchild != NULL)
        p = p->rchild;

    return p;
}

struct Node *InSucc(struct Node *p)
{
    while (p != NULL && p->lchild != NULL)
        p = p->lchild;

    return p;
}

struct Node *Delete(struct Node *p, int key)
{
    struct Node *q;
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;

        free(p);
        return NULL;
    }

    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }

    return p;
}

void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf(" %d ", p->data);
        Inorder(p->rchild);
    }
}

int main()
{

    root = RInseret(root, 50);
    RInseret(root, 20);
    RInseret(root, 100);
    RInseret(root, 60);
    RInseret(root, 150);
    RInseret(root, 90);
    RInseret(root, 130);
    RInseret(root,200 );
    RInseret(root, 95);

    Delete(root, 60);
    Inorder(root);

    return 0;
}