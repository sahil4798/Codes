#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int A[], int n)
{
    int flag = 0 ;
    int i , j;
    for ( i = 0; i < n - 1; i++)
    {   
        flag =0;
        for (j = 0;  j< n-1-i; j++)
        {
            if (A[j] > A[j + 1])
            { 
                Swap(&A[j] , &A[j+1]);
                flag=1;
            }
        }
        if(flag ==0)
        break;
    }
}

int main()
{

    int A[] = {12, 3, 2, 5, 1, 6, 9, 4};
    int size = 8;

    BubbleSort(A, size);

    for (int i = 0; i < size; i++)
        printf(" %d ", A[i]);

    return 0;
}