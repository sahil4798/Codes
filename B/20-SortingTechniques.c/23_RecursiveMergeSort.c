#include <stdio.h>

void Merge(int A[], int l, int mid, int h)
{
    int i, j, k;
    i = l, j = mid + 1, k = l;
    int B[h + 1];
    while (i <= mid, j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for (; i <= mid; i++)
        B[k++] = A[i];

    for (; j <= h; j++)
        B[k++] = A[j];

    for (k = l; k <= h; k++)
        A[k] = B[k];
}

void RMergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
    }
}

int main()
{

    int A[] = {9, 5, 8, 4, 6, 2, 3, 1};
    int size = 8;

    RMergeSort(A, 0 , size-1);
    for(int i=0 ; i<size ; i++)
    printf(" %d " , A[i]);

    return 0;
}