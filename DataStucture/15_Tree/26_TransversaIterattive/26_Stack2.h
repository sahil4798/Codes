#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct Node **N;
    struct node *next;
};
struct node *top = NULL;

void StackCreate(struct node *s , int size) 
{
   s->N =(struct Node **)malloc( size*sizeof(struct Node*) );
}

void push(struct Node *x)
{

    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
        printf("LinkList is overflow \n");

    else
    {
        *(t->N) = x;
        t->next = top;
        top = t;
    }
}

struct Node *pop(void)
{

    struct Node * x = NULL;
    struct node *t;
    if (top == NULL)
        printf("Linklist is Empty ");

    else
    {
        t = top;
        top = top->next;
        x = *(t->N);
        free(t);
    }
    return x;
}

int StackIsEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
