#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Term
{
    int coff;
    int expo;
};

struct Polynomial
{
    int n; // Number of terms present in polynomial
    struct Term *T;
};

void Create(struct Polynomial *P)
{
    printf("Enter the Number of terms in polynomial :");
    scanf("%d", &P->n);
    P->T = (struct Term *)malloc(sizeof(struct Term) * (P->n));

    int i;
    for (i = 0; i < P->n; i++)
    {
        printf("Enter the Cofficient and Exponantial value of Term Number-%d  :", i + 1);
        scanf("%d%d", &P->T[i].coff, &P->T[i].expo);
    }
}

void Display(struct Polynomial *P)
{
    for (int i = 0; i < P->n; i++)
    {
        printf("%d %d", P->T[i].coff, P->T[i].expo);
        printf("\n");
    }
    printf("\n");
}

int Calculate(struct Polynomial *P, int x)
{
    int sum = 0;
    for (int i = 0; i < P->n; i++)
    {
        sum = sum + P->T[i].coff * pow(x, P->T[i].expo);
    }
    return sum;
}


struct Polynomial* Add(struct Polynomial *P1, struct Polynomial *P2)
{
    struct Polynomial *P3;
    P3 = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    // P3->n = P1->n + P2->n ;
    P3->T = (struct Term *)malloc(sizeof(struct Term) *  (P1->n + P2->n) );
    int i, j, k ;
    i = j = k = 0 ;

    while (i < P1->n && j < P2->n)
    {
        if (P1->T[i].expo > P2->T[j].expo)
            P3->T[k++] = P1->T[i++];
        else if (P1->T[i].expo < P2->T[j].expo)
            P3->T[k++] = P2->T[j++];
        else
        {
            P3->T[k] = P1->T[i];
            P3->T[k++].coff = P1->T[i++].coff + P2->T[j++].coff;
        }
    }

    for (; i < P1->n; i++)
        P3->T[k++] = P1->T[i];
    for (; j < P2->n; j++)
        P3->T[k++] = P2->T[j];

    P3->n = k;

    return P3;
}

int main()
{

    struct Polynomial *P1;
    P1 = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    Create(P1);
    Display(P1);
    // printf("Sum is %d \n ", Calculate(P1 , 2) );

    struct Polynomial *P2;
    P2 = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    Create(P2);
    Display(P2);

    struct Polynomial *P3;
    P3 = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    P3 = Add(P1, P2);
    Display(P3);

    return 0;
}