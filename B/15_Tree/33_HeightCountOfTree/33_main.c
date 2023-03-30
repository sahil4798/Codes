#include <stdio.h>
#include <stdlib.h>
#include "33_Queue.h"

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

int Count(struct Node *p)
{   
    int x , y;
    while(p!=NULL)
    {
        x = Count(p->lchild);
        y = Count(p->rchild);

        return x + y + 1;
    }

    return 0;
}
int SumofNodes(struct Node *p)
{   
    int x , y;
    while(p!=NULL)
    {
        x = Count(p->lchild);
        y = Count(p->rchild);

        return x + y + p->data;
    }

    return 0;
}

int Height(struct Node *p)
{   
    int x , y;
    while(p!=NULL)
    {
        x = Height(p->lchild);
        y = Height(p->rchild);

        if(x>y)
        return x+1;
        else
        return y+1;
    }

    return 0;
}



int main()
{
  TreeCreate();

  printf("Total Nodes are : %d " ,Count(root) );  
  printf("Sum of Nodes are : %d " ,SumofNodes(root) );  
  printf("Height of tree is : %d " ,Height(root) );  
  

  return 0;
}