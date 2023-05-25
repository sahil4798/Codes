#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Stack
{
  struct Node*  data;
  struct Stack*next;
};

struct Stack *top = NULL;

// void Display()
// {
//     struct Node *t =top;
//     while(t)
//     {
//         printf("%d " , t->data );
//         t = t->next;
//     }
//     printf("\n");
// }

void Push(struct Node* x)
{

    struct Stack *t = (struct Stack*)malloc(sizeof(struct Stack));
    if(t==NULL)
        printf("LinkList is overflow \n");

    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

struct Node * Pop(void)
{

    struct Node* x =NULL;
    struct Stack * t;
    if(top==NULL)
    printf("Linklist is Empty ");

    else
    {
        t = top;
        top = top->next;
        x= t->data;
        free(t);
    }
    return x;
}

struct Node* stacktop()
{   
    struct Node * x = NULL;
    if(top==NULL)
    printf("Linklist is Empty ");
    
    else
    {
      x = top->data;
    }

  return x ;
}

int IsEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}