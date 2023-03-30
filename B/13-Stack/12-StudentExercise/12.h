#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    char *S;
};

void Create(struct Stack *st)
{
    printf("Enter the size of stack :");
    scanf("%d", &st->size);
    st->S = (char *)malloc(st->size * sizeof(char));
    st->top = -1;
}

void Display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d \n ", st.S[i]);
    }
}

void Push(struct Stack *st, char x)
{
    if (st->top == st->size - 1)
        printf("Stack Underflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

char Pop(struct Stack *st)
{
    char x = -1;
    if (st->top == -1)
        printf("Stack Underflow \n ");

    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

char Peek(struct Stack st, int pos)
{
    char x = -1;
    if (st.top - pos + 1 < 0)
        printf("Invalid Position \n");

    else

        x = st.S[st.top - pos + 1];

    return x;
}
char stacktop(struct Stack st)
{
    char x = -1;

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

