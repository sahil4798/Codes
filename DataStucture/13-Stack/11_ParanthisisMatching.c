#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
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

void push(char x)
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

char pop(void)
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

int IsBalanced(char *exp)
{

    int i;
    // printf("Hii\n");

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);

        else if (exp[i] == ')')
        {
            if (top==NULL)
                return 0;
            else
                pop();
        }
    }
    if (top==NULL)
        return 1;
    else
        return 0;
}

int main()
{

    char *exp = "( (a+b)*(c-d) )";

    // if (IsBalanced(exp))
    // {
    //     printf("Expresion is balanced \n");
    // }
    // else
    //     printf("Error \n");
    
    printf("%d"  , IsBalanced(exp));

    return 0;
}