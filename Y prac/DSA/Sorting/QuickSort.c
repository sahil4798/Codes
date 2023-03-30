#include <stdio.h>

void Swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

int partion(int A[], int l, int h)
{
    int temp = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= temp);

        do
        {
            j--;
        } while (A[j] > temp);

        if (i < j)
            Swap(&A[i], &A[j]);

    } while (j > i);

     Swap( &A[l] , &A[j ] );

    return j;
}

void QuickSort(int A[], int l, int h)
{
    int temp;
    if (l < h)
    {
        temp = partion(A, l, h);
        QuickSort(A, l, temp);
        QuickSort(A, temp + 1, h);
    }
}

int main()
{
    int A[] = {50, 10, 70, 60, 20, 30, 80, 393983};
    QuickSort(A, 0, 7);

    for (int i = 0; i < 8; i++)
        printf(" %d ", A[i]);

    return 0;
}