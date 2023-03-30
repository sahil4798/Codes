#include <stdio.h>

void Display(int A[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", A[i]);

    printf("\n");
}

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int M[h + 1];

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

    for (k = l; k <= h; k++)
    {
        A[k] = M[k];
    }
}



void MergeSort(int A[], int n)
{
    int pass, i;
    int l, h, mid;
    for (pass = 2; pass <= n; pass = 2 * pass)
    {
        for (i = 0; i + pass - 1 <= n; i = i + pass)
        {
            l = i, h = i + pass - 1, mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (n > pass / 2)
        Merge(A, 0, pass / 2 - 1, n);
}


void RMergeSort(int A[] , int l , int h)
{
   int mid;
   if(l<h)
   {
    mid = (l+h)/2;
    RMergeSort(A, l , mid);
    RMergeSort(A, mid+1 , h);
    Merge(A , l , mid , h);
   }


}

int main()
{

    int A[] = {1, 3, 5, 7, 9, 0, 2, 4, 6, 8};
    // MergeSort(A, 10);
    RMergeSort(A , 0 , 9);

    for (int i = 0; i < 10; i++)
        printf(" %d ", A[i]);

    return 0;
}