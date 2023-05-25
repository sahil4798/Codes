#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void Create(struct Stack *st)
{
    printf("Enter the size of stack :");
    scanf("%d", &st->size);
    st->S = (int *)malloc(st->size * sizeof(int));
    st->top = -1;
}

void Display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d \n ", st.S[i]);
    }
}

void Push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("Stack Underflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int Pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("Stack Underflow \n ");

    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int Peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
        printf("Invalid Position \n");

    else

        x = st.S[st.top - pos + 1];

    return x;
}
int stacktop(struct Stack st)
{
    int x = -1;

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

int main()
{

    struct Stack st;

    Create(&st);
    Push(&st, 10);
    Push(&st, 20);
    Push(&st, 30);
    Push(&st, 40);
    Push(&st, 50);
    // Push(&st, 60);
    Display(st);

    printf("%d ", Pop(&st));
    printf("%d ", Pop(&st));
    printf("%d ", Pop(&st));
    // printf("%d " , Pop(&st));

    printf("\n");
    Display(st);
    printf("\n");

    printf("%d ", Peek(st, 1));
    printf("%d ", Peek(st, 3));
    printf("%d \n", stacktop(st));

    if (IsEmpty(st))
        printf("stack is Empty \n ");
    else
        printf("stack is not Empty \n ");

    if (ISfull(st))
        printf("stack is full \n ");
    else
        printf("stack is not full \n ");

    return 0;
}