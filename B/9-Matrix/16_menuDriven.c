#include <stdio.h>
#include <stdlib.h>

struct Diagonal
{
    int *A;
    int n;
};

void Create(struct Diagonal *obj)
{
    for (int i = 1; i <= obj->n; i++)
    {
        printf("Enter the element of [%d] : ", i);
        scanf("%d", &obj->A[i - 1]);
    }
}

int Get(struct Diagonal obj, int i, int j)
{
    if (i == j)
        printf("  M[%d][%d] = %d \n", i, j, obj.A[i - 1]);
        else
        printf(" M[%d][%d] = 0 \n ");
}

void Set(struct Diagonal *obj, int i, int j, int x)
{
    if (i == j)
        obj->A[i - 1] = x;
}
void Display(struct Diagonal obj)
{
    for (int i = 1; i <= obj.n; i++)
    {
        for (int j = 1; j <= obj.n; j++)
        {
            if (i == j)
                printf("%d ", obj.A[i - 1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{

    struct Diagonal obj;
    int N, ch ;
    printf("Enter the Dimension of matrix :");
    scanf("%d", &N);
    obj.n = N;
    obj.A = (int *)malloc(obj.n * sizeof(int));
    int i, j , x;
    do
    {
        printf("Enter 1 for Create Diagonal Matrix\n");
        printf("Enter 2 for Get Diagonal Matrix\n");
        printf("Enter 3 for Set Diagonal Matrix\n");
        printf("Enter 4 for Display Diagonal Matrix\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Create(&obj);
            break;

        case 2:
            printf("Enter the value of i and j :");
            scanf("%d%d", &i, &j);
            Get(obj, i, j);
            break;

        case 3:
            printf("Enter the value of i ,  j and x :");
            scanf("%d%d%d", &i, &j , &x);
            Set(&obj , i, j , x);
            break;

        case 4:
            Display(obj);
            break;
        }
    } while (ch < 5);

    return 0;
}