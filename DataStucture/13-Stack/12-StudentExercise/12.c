#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "12.h"

int IsBalance(char *exp)
{
    struct Stack *st;
    // // st->size = strlen(exp);
    // st->size = 13;
    // st->top = -1;
    // st->S = (char *)malloc(sizeof(char) * st->size);
    Create(st);
    char c;

    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            Push(st, exp[i]);
        }

        else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')')
        {
            if (IsEmpty(*st))
                return 0;
            c = Pop(st);
            if (exp[i] - c != 1 && exp[i] - c != 2)
                return 0;
        }
    }

    return IsEmpty(*st) ? 1 : 0;
}

int main()
{
    // char *exp = "( (a+b)*(c-d) )";

    char *p;
    char C[] = {'{', '(', '[', 'a', '+', 'b', ']', '+','[', 'c', '-', 'd', ']', ')', '/', 'e', '}', '\0'};
    p = C;


    // if (IsBalance(exp))
    if (IsBalance(p))
        printf("IS BAlanced \n");
    else
        printf("Not Balanced \n");

    return 0;
}