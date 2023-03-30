#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertion(struct Node **B, int key)
{

    struct Node *t, *p, *x, *y;
    p = *B;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = key;
    t->next = NULL;

    if (p == NULL)
    {
        p = t;
    }
    else
    {
        x = p->next;
        y = p;
        while (x->data < key && x != NULL)
        {
            x = x->next;
            y = x;
        }
        y->next = t;
        t->next = x;
    }
}

int Delete(struct Node **B)
{

    struct Node *p = *B, *q;
    int x = -1;
    if (p->next != NULL)
    {
        q = p;
        x = q->data;
        p = p->next;
    }
    return x;
}

int Max(int A[], int n)
{
    int max = __MINGW32__;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

void BucketSort(int A[], int n)
{
    int i, j;
    int max = Max(A, n);
    struct Node *t;

    struct Node *B[max + 1];

    for (i = 0; i < max + 1; i++)
    {
        // t = (struct Node*)malloc(sizeof(struct Node));
        B[i] = NULL;
    }

    for (int i = 0; i < n; i++)
    {
        insertion(&B[A[i]], A[i]);
    }

    // j = 0;  
    // {
    //     while (B[i] != NULL)
    //     {
    //         A[j++] = Delete(&B[i]);
    //     }
    // }
}

int main()
{

    int A[] = {2, 4, 2, 4, 5, 8, 7, 8, 5, 5};
    BucketSort(A, 10);

    for (int i = 0; i < 10; i++)
        printf(" %d ", A[i]);

    return 0;
}