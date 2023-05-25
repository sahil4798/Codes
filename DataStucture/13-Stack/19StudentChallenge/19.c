#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "19.h"

int IsOprand(char c)
{
    if (c == '(' || c == ')' || c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return 0;
    else
        return 1;
}

int PreoutStack(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 3;
    else if (c == '^')
        return 6;
    else if (c == '(')
        return 7;
    else if (c == ')')
        return 0;
    else
        return -1;
}
int PreinStack(char c)
{
    if (c == '+' || c == '-')
        return 2;
    else if (c == '*' || c == '/')
        return 4;
    else if (c == '^')
        return 5;
    else if (c == '(')
        return 0;
    // else if (c == ')')
    //     return 0;
    else
        return 0;
}

char *Convert(char *infix)
{
    int i = 0, j = 0;
    char *post;
    post = (char *)malloc(sizeof(char) * (strlen(infix) + 2));
    while (infix[i] != '\0')
    {
        if (IsOprand(infix[i]))
        {
            post[j++] = infix[i++];
        }
        else
        {
            if (PreoutStack(infix[i]) > PreinStack(stacktop()))
                // if (PreoutStack(infix[i]) > PreinStack(top->data))
                push(infix[i++]);

            else
            {
                if (infix[i] == ')')
                {
                    while (stacktop() != '(' )
                        post[j++] = pop();
                    post[j++] = pop();
                }
                else
                {
                    post[j++] = pop();
                }
            }
        }
    }
    while (!IsEmpty())
    {
        post[j++] = pop();
    }
    post[j] = '\0';

    return post;
}

int main()
{
    char C[] = {'(', '(', 'a', '+', 'b', ')', '*', 'c', ')', '-', 'd', '^', 'e', '^', 'f'};
    char *p;
    p = C;
    char *post;
    post = Convert(p);

    for (int i = 0; post[i] != '\0'; i++)
        printf(" %d ", post[i]);

    return 0;
}