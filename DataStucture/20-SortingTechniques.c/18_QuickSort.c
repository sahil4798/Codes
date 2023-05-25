#include <stdio.h>
#include <math.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i, j;
    i = l;
    j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            Swap(&A[i], &A[j]);

    } while (j > i);

    Swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, __INT_MAX__}; // Total Element with infine is 11
    int n = 11;
    int i;
    QuickSort(A, 0, n - 1);

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", A[i]);
    }

    return 0;
}