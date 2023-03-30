#include <stdio.h>

void Insert(int *A, int n)
{
    int temp = A[n];
    int i = n;

    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }

    A[i] = temp;

    // if(A[i]>A[i/2])
    // Swa
}

void CreteHeap(int *A, int size)
{
    int i;
    for (int i = 2; i < size; i++)
    {
        Insert(A, i);
    }
}

int DeleteMy(int *A, int size)
{
    int i, j, temp, val;
    temp = A[size - 1];
    val = A[1];
    A[1] = A[size - 1];
    A[size - 1] = val;
 

    i = 1;
    j = 2 * i;
    while ( j < size -1-1  && (temp < A[j] || temp < A[j + 1]))
    {
        if (A[j] > A[j + 1])
            j = j;
        else
            j = j + 1;
        A[i] = A[j];
        i = j;
        j = 2 * i;
   
    }
    A[i] = temp;
    return val;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Delete(int *A, int size)
{

    int i, j, val;
    val = A[1];
    A[1] = A[size - 1];
    A[size - 1] = val;

    printf("************%d************ \n ", size ); 
    printf("************%d************ \n ", size-1 ); 
    // printf("************%d************ \n " ,A[1] ); 

    i = 1;
    j = 2 * i;

    while (j < size-1-1 )  //logic of n-1-1 is that we already cosidered second last element in j , j+1 comparison 
    {
        if (A[j] < A[j + 1])
            j = j + 1;

        if (A[j] > A[i])
        {
            Swap(&A[i], &A[j]);
            i = j;
            j = 2 * i;
        }
        else
            break;
    }
    return val;
}

void HeapSort(int *A, int size)
{

    for (int i = size ; i > 1; i--)
        Delete(A, i);
}

int main()
{

    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};
    // int A[] = {0, 40, 35, 30, 15, 10, 25, 5};
    int size = 8;
    int *P = A;

    CreteHeap(P, size);
    for (int i = 1; i < 8; i++)
        printf(" %d ", P[i]);
    printf("\n");

    // printf(" Deleted value is %d \n ", DeleteMy(P, size));
    // printf(" Deleted value is %d \n ", DeleteMy(P, size-1));

    printf(" Deleted value is %d \n ", Delete(P, size ));

    // HeapSort(P , size);

    for (int i = 1; i < 8; i++)
        printf(" %d ", P[i]);

    return 0;
}