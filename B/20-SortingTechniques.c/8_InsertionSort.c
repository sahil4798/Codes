#include <stdio.h>

void InsertionSort(int A[], int size)
{
    int x, j;
    for (int i = 1; i < size; i++)
    {
        x = A[i];
        j = i - 1;
        while (j > -1 && x < A[j])
        {   
    
            A[j+1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
void Display(int A[], int size)
{
    for (int i = 0; i < size; i++)
        printf(" %d ", A[i]);

    printf("\n");
}

int main()
{

    int A[] = {5, 3, 1, 8, 7, 24, 10};
    InsertionSort(A , 7);
    Display(A ,  7);

    return 0;
}