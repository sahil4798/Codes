#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void CountSort(int A[], int n)
{
    int *C, i, j, max;
    max = FindMax(A, n);
    C = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max + 1; i++)
        C[i] = 0;

    for (i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    i = 0;
    j = 0;
   
    while (i <= max )
    {
        // while (C[i] > 0)  //Use while Loop instead of if you have duplicate element.
        if (C[i] > 0)
        {
            A[j++] = i;
            C[i]--;
        }
        
        i++;
    }
}

int main()
{

    int A[] = {8, 3, 9, 4, 20, 53, 17, 1};
    int size = 8;
    CountSort(A , size);
  
    for(int i =0 ; i<size ; i++)
    {
        printf(" %d " , A[i]);
    }
    // printf("%d \n " ,FindMax(A , size) ); 

    return 0;
}