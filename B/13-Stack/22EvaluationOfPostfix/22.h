#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void Display()
{
    struct Node *t = top;
    while (t)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

void push(int x)
{

    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("LinkList is overflow \n");

    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(void)
{

    int x = -1;
    struct Node *t;
    if (top == NULL)
        printf("Linklist is Empty ");

    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
int IsEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int stacktop( )
{
    int x = 'e';

    if (top == NULL)
    return x;
        // printf("Stack Underflow \n");
        

    else
        x = top->data ;

    return x;
}


