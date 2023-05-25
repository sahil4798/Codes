#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;

void Insert(int key)
{ 
    struct Node *t = root;
    struct Node *r = NULL, *p;
    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }

    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;

        else if (key > t->data)
            t = t->rchild;

        else
            return;
    }

    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

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
    struct Node *temp;
    Insert(20);
    Insert(30);
    Insert(90);
    Insert(40);
    Insert(60);

    Inorder(root);
    printf("\n");

   

    return 0;
}