#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *M;
    int n;
};

void Set(struct Matrix *obj, int i, int j, int x)
{
    if (i >= j)
        obj->M[i * (i - 1) / 2 + j - 1] = x;
}

int Get(struct Matrix obj, int i, int j)
{
    if (i >= j)
        return obj.M[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void Display(struct Matrix obj)
{
    for (int i = 1; i <= obj.n; i++)
    {
        for (int j = 1; j <= obj.n; j++)
        {
            if (i >= j)
                printf("%d ", obj.M[i * (i - 1) / 2 + j - 1]);
            else
                printf("%d ", 0);
        }
        printf("\n");
    }
}

int main()
{

    struct Matrix obj;
    printf("Enter the size of matrix : ");
    scanf("%d", &obj.n);
    obj.M = (int *)malloc(obj.n * (obj.n + 1) / 2 * sizeof(int));
    int i, j, x;

    for (i = 1; i <= obj.n; i++)
    {
        for (j = 1; j <= obj.n; j++)
        {
            scanf("%d", &x);
            Set(&obj, i, j, x);
        }
    }
    printf("\n");
    printf("%d\n", Get(obj, 1, 3));

    Display(obj);

    return 0;
}