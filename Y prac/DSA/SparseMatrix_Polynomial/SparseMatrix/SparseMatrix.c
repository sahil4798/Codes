#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int i;
    int j;
    int data;
};

struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *E;
};

void Create(struct Sparse *S)
{
    // struct Element *e;
    // e = (struct Element *)malloc(sizeof(struct Element));
    printf("Enter the number of Row in Matrix : ");
    scanf("%d", &S->m);
    printf("Enter the number of Coloum in Matrix : ");
    scanf("%d", &S->n);
    printf("Enter the number of Element in Matrix : ");
    scanf("%d", &S->num);
    // S->E = (struct Node)
    S->E = (struct Element *)malloc(S->num * sizeof(struct Element));

    for (int x = 0; x < S->num; x++)
    {
        printf("Enter the of Row number : Coloum number : Element of %d : ", x + 1);
        scanf("%d%d%d", &S->E[x].i, &S->E[x].j, &S->E[x].data);
    }
}

struct Sparse *Add(struct Sparse *S1, struct Sparse *S2)
{
    struct Sparse *S3 = NULL;

    if (S1->m == S2->m && S1->n == S2->n)
    {
        S3 = (struct Sparse *)malloc(sizeof(struct Sparse));
        S3->m = S1->m;
        S3->n = S1->n;
        S3->num = S1->num + S2->num;
        S3->E = (struct Element *)malloc(sizeof(struct Element) * S3->num);
        int x, y, z;
        x = y = z = 0;

        while (x < S1->num && y < S2->num)
        {
            if (S1->E[x].i < S2->E[y].i)
            {
                S3->E[z++] = S1->E[x++];
            }
            else if (S1->E[x].i > S2->E[y].i)
            {
                S3->E[z++] = S2->E[y++];
            }
            else
            {
                if (S1->E[x].j < S2->E[y].j)
                    S3->E[z++] = S1->E[x++];
                else if (S1->E[x].j > S2->E[y].j)
                    S3->E[z++] = S2->E[y++];
                else
                {
                    S3->E[z] = S1->E[x];
                    S3->E[z++].data = S1->E[x++].data + S2->E[y++].data;
                }
            }
        }

        for (; x < S1->num; x++)
            S3->E[z++] = S1->E[x];
        for (; y < S2->num; y++)
            S3->E[z++] = S2->E[y];

        S3->num = z;
    }

    return S3;
}

void Display(struct Sparse *S)
{
    for (int x = 0; x < S->num; x++)
    {
        printf(" %d ", S->E[x].i);
        printf(" %d ", S->E[x].j);
        printf(" %d ", S->E[x].data);
        printf("\n");
    }
}

int main()
{

    struct Sparse *S;
    S = (struct Sparse *)malloc(sizeof(struct Sparse));
    Create(S);
    Display(S);

    struct Sparse *S2;
    S2 = (struct Sparse *)malloc(sizeof(struct Sparse));
    Create(S2);
    Display(S2);

    struct Sparse *S3;
    S3 = Add(S, S2);
    Display(S3);

    return 0;
}