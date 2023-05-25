#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};

int FindMax(int A[], int n)
{
    int max = __MINGW32__;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}

void BucketSort(int A[], int n)
{
    int max, i, j;
    struct Node **B;
    max = FindMax(A, n);

    B = (struct Node **)malloc(sizeof(struct Node *) * (max + 1));
    struct Node *temp;

    for (i = 0; i < max + 1; i++)
        B[i] = NULL;

    for (i = 0; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = B[A[i]];
        B[A[i]] = temp;
    }

     
 
    for(i=0 ; i<max+1  ; i++)
    {
        if(B[i]!=NULL)
        {
            temp =B[i];
            while(temp->next!=NULL)
            {
                printf(" %d " , temp->data);
                temp = temp->next;
            }
        }

    }
}

int main()
{

    int A[] = {8, 3, 9, 4, 20, 53, 17, 1};
    int size = 8;
    BucketSort(A, size);

    // for (int i = 0; i < size; i++)
    //     printf(" %d ", A[i]);

    return 0;
}