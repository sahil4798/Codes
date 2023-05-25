#include <stdio.h>

void Display(int A[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", A[i]);

    printf("\n");
}

void Merge(int A[], int l, int mid, int h)
{
    int i, j, k;
    i = l, j = mid + 1, k = l;
    int B[h + 1];
    while (i <= mid && j <= h)
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

void IMergeSort(int A[], int n)
{
    int p, i, l, mid, h;

    for (p = 2; p <= n; p = 2 * p)
    {

        for (i = 0; i + p - 1 <= n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (n > p / 2)
        Merge(A, 0, p / 2 - 1, n );
    //  Merge(A , 0 , n-2  , n-1);
}

int main()
{

    // int A[] = { 9, 5  ,8 , 4 , 6  , 2  ,3 , 1 ,7};
    int A[] = { 1 , 3 , 5 , 7 , 9 , 0  , 2 ,4 ,6 , 8};
    int size = 10;

    IMergeSort(A, size);

    Display(A , size);

    

    return 0;
}