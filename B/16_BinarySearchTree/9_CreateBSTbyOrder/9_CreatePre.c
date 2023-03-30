#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Node *root;
void CreatePre(int pre[], int n)
{
  struct Node *t, *p;
  struct Stack st;
  Create(&st);
  int i = 0;

  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = pre[i++];
  t->lchild = t->rchild = NULL;
  root = t;
  p = t;

  while (i < n)
  {
    if (pre[i] < p->data)
    {
      t = (struct Node *)malloc(sizeof(struct Node));
      t->data = pre[i++];
      t->lchild = t->rchild = NULL;
      p->lchild = t;
      Push(&st, p);
      p = t;
    }
    else
    {
      if (  (pre[i] > p->data) && (   IsEmpty(st)  ) )
      {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = pre[i++];
        t->lchild = t->rchild = NULL;
        p->rchild = t;
        p = t;
      } 
      else if (pre[i] > p->data && pre[i] < stacktop(st)->data)
      {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = pre[i++];
        t->lchild = t->rchild = NULL;
        p->rchild = t;
        p = t;
      }
      else
        p = Pop(&st);
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

  int A[] = {40, 20, 10, 30, 80, 60, 100};
  CreatePre(A, 7);
  Inorder(root);

  return 0;
}