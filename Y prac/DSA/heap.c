#include <stdio.h>

void insert(int A[], int index)
{
    int i = index;

    while (i > 1)
    {

        if (A[i] > A[i / 2])
        {
            int temp = A[i];
            A[i] = A[i / 2];
            A[i / 2] = temp;
            i = i / 2;
        }
        else
            break;
    }
}

void Create(int A[], int n)
{
    for (int i = 2; i < n; i++)
    {
        insert(A, i);
    }
}

int  Delete(int A[], int n)
{
    int temp = A[1];
    A[1] = A[n - 1];

    A[n-1] = temp;

    int i = 1, j = 2 * i;

    while (j < n - 1-1)
    {

        if (A[j + 1] > A[j])
            j = j + 1;

        if (A[i] < A[j])
        {

            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * i;
        }
        else
            break;
    }

    return temp;
}

void HeapSort(int A[] , int n)
{
    for(int i =0 ; i<n-1-1 ; i++)
     Delete(A , n-i);
}


int main()
{

    int A[] = {0, 1, 10, 30, 50, 20, 90, 80, 60};
    Create(A, 9);

    for (int i = 1; i < 9; i++)
        printf(" %d ", A[i]);
        printf("\n");

    Delete(A , 9); 
    Delete(A , 8); 
    Delete(A , 7); 
    // Delete(A , 6); 
    // Delete(A , 5); 
    // Delete(A , 4); 

    // HeapSort(A , 9);

    for (int i = 1; i < 9; i++)
        printf(" %d ", A[i]);

    return 0;
}