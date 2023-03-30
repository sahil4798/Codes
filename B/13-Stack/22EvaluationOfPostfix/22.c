#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "22.h"

int Isoprand(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 0;
    else
        return 1;
}

int Pre(char c)
{
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else if (c == 'e')
        return 0;
}

int Evaluate(char *post)
{
    int i = 0;
    int a, b, c;

    for (i = 0; post[i] != '\0'; i++)
    {
        if (Isoprand(post[i]))
        {
            push(post[i] - '0');
        }

        else
        {
            b = pop();
            a = pop();
            switch (post[i])
            {
            case '+':
                c = a + b;
                break;

            case '-':
                c = a - b;
                break;

            case '*':
                c = a * b;
                break;

            case '/':
                c = a / b;
                break;
            }
            push(c);
        }
    }

    return pop();
}

int main()
{
    char *post;

    // post = " 35*62/+4-";
    char C[] = { '3' ,'5','*','6','2','/','+', '4', '-','\0' };
    post = C;
   

    for (int i = 0; post[i] != '\0'; i++)
        printf(" %c ", post[i]);

    printf("\n  %d  \n ", Evaluate(post));

    return 0;
}
