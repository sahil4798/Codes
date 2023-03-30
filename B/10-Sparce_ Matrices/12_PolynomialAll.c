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
    int n;
    struct Term *t;
};

void Create(struct Polynomial *p)
{
    printf("Enter the number of total terms in Polynomial ");
    scanf("%d", &p->n);
    printf("Enter the all coff and expo of polynomial \n  ");
    p->t = (struct Term *)malloc(p->n * sizeof(struct Term));
    for (int i = 0; i < p->n; i++)
    {
        printf("Enter the coff and expo of %d term : ", i + 1);
        scanf("%d%d", &p->t[i].coff, &p->t[i].expo);
    }
}

void Display(struct Polynomial p)
{
    // int x;
    // int sum = 0;
    // printf("Enter the value of x :");
    // scanf("%d", &x);
    for (int i = 0; i < p.n; i++)
    {
      printf("%dx%d+" , p.t[i].coff , p.t[i].expo );
    // sum += p.t[i].coff * pow(x, p.t[i].expo);
    }
    // printf("Polynomial = %d \n", sum);
    printf("\n");
} 

struct Polynomial *Addition(struct Polynomial p1, struct Polynomial p2)
{
    struct Polynomial *p3;
    p3 = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    p3->t = (struct Term *)malloc((p1.n + p2.n) * sizeof(struct Term));

    int i, j, k;
    i = j = k = 0;
    while (i < p1.n && j < p2.n)
    {
        if (p1.t[i].expo > p2.t[j].expo)
            p3->t[k++] = p1.t[i++];
        else if (p1.t[i].expo < p2.t[j].expo)
            p3->t[k++] = p2.t[j++];
        else
        {  
            p3->t[k].expo = p1.t[i].expo;
            p3->t[k++].coff = p1.t[i++].coff + p2.t[j++].coff;
        }
    }

    for( ; i<p1.n ;i++)
    p3->t[k++] = p1.t[i];
    for( ; j<p2.n ;j++)
    p3->t[k++] = p2.t[j];
    p3->n = k;

    return p3;
}

int main()
{

    struct Polynomial p1, p2, *p3;
    Create(&p1);
    Create(&p2);
    p3 = Addition(p1, p2);
    Display(p1);
    Display(p2);
    Display(*p3);

    return 0;
}