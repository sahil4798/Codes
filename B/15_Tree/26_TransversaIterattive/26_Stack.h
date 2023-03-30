#include <stdio.h>
#include <stdlib.h>
// #include"26_Queue.h"



struct Stack
{
    int size;
    int top;
    struct Node **S;
};

void StackCreate(struct Stack *st , int x)
{
    // printf("Enter the size of stack :");
    // scanf("%d", &st->size);
    st->size = x;
    st->S = (struct Node **)malloc(st->size * sizeof(struct Node*));
    st->top = -1;
}


void Push(struct Stack *st, struct Node *x)
{
    if (st->top == st->size - 1)
        printf("Stack Underflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

struct Node* Pop(struct Stack *st)
{
    struct Node* x = NULL;
    if (st->top == -1)
        printf("Stack Underflow \n ");

    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}


int StackIsEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}

