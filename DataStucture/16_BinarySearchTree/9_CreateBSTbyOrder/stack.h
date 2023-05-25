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
    int size;
    int top;
    struct Node **S;
};

void Create(struct Stack *st)
{
    printf("Enter the size of stack :");
    scanf("%d", &st->size);
    // st->size =100;
    st->S = (struct Node **)malloc(st->size * sizeof(struct Node*));
    st->top = -1;
}

void Display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d \n ", st.S[i]);
    }
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
    struct Node *x = NULL;
    if (st->top == -1)
        printf("Stack Underflow \n ");

    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}



struct Node* stacktop(struct Stack st)
{
    struct Node *x = NULL;

    if (st.top == -1)
        printf("Stack Underflow \n");

    else
        x = st.S[st.top];

    return x;
}

int IsEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}

int ISfull(struct Stack st)
{
    if (st.top == st.size - 1)
        return 1;

    else
        return 0;
}


