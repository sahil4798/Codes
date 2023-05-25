#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void ShellSort1(int A[], int n)
{
    int i, j, k, gap;
    gap = n / 2;
    for (i = gap; i > 0; i = i / 2)
    {
        for (j = 0; j < n - gap; i++)
        {
            if (A[j] > A[j + gap])
            {
                Swap(&A[j], &A[j + gap]);
                if (j - gap >= 0)
                {
                    if (A[j - gap] < A[j])
                        Swap(&A[j - gap], &A[j]);
                }
            }
        }
    }
}

void ShellSort(int A[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j + gap] = temp;
        }
    }
}

int main()
{
    int A[] = {8, 3, 9, 4, 20, 53, 17, 1};
    int size = 8;

    ShellSort(A, size);
    for (int i = 0; i < size; i++)
        printf(" %d ", A[i]);

    return 0;
}