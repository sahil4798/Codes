#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        // j = k = i;
        for ( j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        Swap(&A[i], &A[k]);
    }
}

int main()
{

    int A[] = {12, 3, 2, 5, 1, 6, 9, 4};
    int size = 8;
    
    SelectionSort(A , size);
  
    for (int i = 0; i < size; i++)
        printf(" %d ", A[i]);

    return 0;
}