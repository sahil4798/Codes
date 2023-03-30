#include <stdio.h>

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int M[h+1];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            M[k++] = A[i++];
        else
            M[k++] = A[j++];
    }

    for (; i <= mid; i++)
        M[k++] = A[i];

    for (; j <= h; j++)
        M[k++] = A[j];

        for(k =l ; k<=h; k++)
        {
            A[k] = M[k];
        }
}

int main()
{

    int A[] = {10, 20, 30, 1, 3, 5, 7, 9, 0, 2, 4, 6, 8, 40, 50, 60};
    Merge(A, 3, 7, 12);
    
    for(int i=0 ; i<16 ; i++)
     printf(" %d " ,A[i] );


    return 0;
}