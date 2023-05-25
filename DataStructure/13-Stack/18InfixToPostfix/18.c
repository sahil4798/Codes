#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "18.h"

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

char *Convert(char *infix)
{
    char *pos;
    pos = (char *)malloc(sizeof(char) * (strlen(infix) + 2));

    int i;
    int j = 0;
    for (i = 0; infix[i] != '\0'; i++)
    {
        if (Isoprand(infix[i]))
            pos[j++] = infix[i];

        else
        {
            if (Pre(infix[i]) > Pre(stacktop()))
                push(infix[i]);
            else
            {
                while (Pre(stacktop()) >= Pre(infix[i])  && !IsEmpty() )
                {
                    pos[j++] = pop();
                }
                push(infix[i]);
            }
        }
    }
    while ( !IsEmpty() )
        pos[j++] = pop();

        pos[j]='\0';
        return pos;
}

int main()
{
    char *infix = "a+b*c-d/e";

    char *post;

    post = Convert(infix);

    for(int i=0 ; post[i]!='\0' ; i++)
    printf(" %c " , post[i]);
    

    return 0;
}

