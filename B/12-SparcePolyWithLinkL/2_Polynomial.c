#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int coff;
    int exp;
    struct Node *next;
} *poly = NULL;

void Create()
{
    struct Node *t, *last = NULL;
    int num, i;
    printf("Enter the Number of term in Polynomial :");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the Terms of Polynomial i.e coff and expo : ");
        scanf("%d%d", &t->coff, &t->exp);
        t->next = NULL;

        if (poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}

void Display(struct Node *p)
{

    while (p != NULL)
    {
        printf("%d*x%d +", p->coff, p->exp);
        p = p->next;
    }
    printf("\n");
}

long Calc(struct Node *p, int x)
{
    long sum = 0;

    while (p)
    {
        sum = sum + p->coff * pow(x, p->exp);
         p=p->next;
    }
    return sum;
}

int main()
{
    Create();
    Display(poly);
    printf("%ld \n" , Calc(poly , 1) );

    return 0;
}