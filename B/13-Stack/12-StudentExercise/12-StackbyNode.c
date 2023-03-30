#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "12-StackByLL.h"

int IsBalance(char *exp)
{

    char c;

    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            push(exp[i]);
        }

        else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')')
        {
            if (IsEmpty())
                return 0;
            c = pop();
            if (exp[i] - c != 1 && exp[i] - c != 2)
                return 0;
            // if (exp[i] - c == 1 || exp[i] - c == 2)
            //     printf("Checkpoint \n");
            // else
            //     return 0;
        }
    }

    return IsEmpty() ? 1 : 0;
}

int main()
{
    char *exp = "( (a+b)*(c-d) )";

    char *p;
    char C[] = {'{', '(', '[', 'a', '+', 'b', ']', '+', '[', 'c', '-', 'd', ']', ')', '/', 'e', '}', '\0'};
    p = C;

    // if (IsBalance(exp))
    if (IsBalance(p))
        printf("IS BAlanced \n");
    else
        printf("Not Balanced \n");

    return 0;
}