#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

int NodeHeight(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}

struct Node *LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (root == p)
        root = pl;

    return pl;
}
struct Node *LRRotation(struct Node *p)
{   
   struct Node  * pl = p->lchild;
   struct Node  * plr = pl->rchild;
   
   pl->rchild = plr->lchild;
   p->lchild =plr->rchild;

   plr->lchild = pl ;
   plr->rchild = p ;

   p->height = NodeHeight(p); 
   pl->height = NodeHeight(pl); 
   plr->height = NodeHeight(plr); 
 
   if(p==root)
   root=plr;

    return plr;
}


struct Node *RRRotation(struct Node *p)
{
    return NULL;
}
struct Node *RLRotation(struct Node *p)
{
    return NULL;
}

struct Node *RInseret(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if (key < p->data)
        p->lchild = RInseret(p->lchild, key);

    else if (key > p->data)
        p->rchild = RInseret(p->rchild, key);

    p->height = NodeHeight(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
        return RRRotation(p);
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->rchild) == -1)
        return RLRotation(p);

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
    // root = RInseret(root , 10);
    // RInseret(root , 5);
    // RInseret(root , 2);

    root = RInseret(root , 50);
    RInseret(root , 10);
    RInseret(root , 20);
  

    Inorder(root);

    return 0;
}