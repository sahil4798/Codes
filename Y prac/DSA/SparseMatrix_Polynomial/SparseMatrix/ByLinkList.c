#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    int j;
    struct Node *next;
};

void Display(struct Node *A)
{
    for (int i = 0; i < 4; i++)
    {
        struct Node *p = A[i];
        for (int j = 0; j < n; j++)
        {

            printf("%d", p->key);

        }
    }
}
void Create(struct Node **B)
{
    int m, n, num;
    printf("Enter the Number of Rows ,Coloums and Total Elements in Sparse Matrix ");
    scanf("%d%d%d", &m, &n, &num);

    struct Node *A[m];
    for (int p = 0; p < m; p++)
        A[p] == NULL;
    B = A;
    struct Node *t;
    struct Node *last = NULL;

    int x, i = 0;
    for (x = 0; x < num; x++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the Row , Coloum Number And Value of %i Element ", x + 1);
        scanf("%d%d%d", &i, &t->j, &t->key);

        if (A[i - 1] == NULL)
        {
            A[i - 1] = t;
            last = t;
        }

        else
            last->next = t;

        t->next = NULL;
        last = t;
    }
}

int main()
{
    struct Node **A;
    Create(A);

    return 0;
}


