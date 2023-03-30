#include <stdio.h>
#include <math.h>

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

void CountSort(int A[], int n)
{
    int i, j = 0;
    int max = Max(A, n);
    int C[max + 1]  ;
    for(i=0 ; i<max+1 ; i++)
    {
        C[i] =0 ;
    }


    for (i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    for (i = 0; i < max + 1; i++)
    {
        while (C[i] != 0)
        {
            A[j++] = i;
            C[i]--;
        }
    }
}

int main()
{

    int A[] = {1, 15, 2, 7, 4, 9, 8, 5, 6, 1};
    CountSort(A, 10);

    for(int i=0 ; i< 10 ; i++)
    printf(" %d ", A[i]);

    return 0;
}