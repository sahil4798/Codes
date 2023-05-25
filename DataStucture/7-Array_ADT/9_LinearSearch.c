#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void display(struct Array ob)
{
    printf("The element of array are : ");

    for (int i = 0; i < ob.length; i++)
    {
        printf(" %d ", ob.A[i]);
    }
    printf("\n");
}

int Search(struct Array ob, int key)
{
    for (int i = 0; i < ob.length ; i++)
    {
        if (ob.A[i] == key)
        {
            return i;
        }
    }

    return -1;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Transposition
int Searcho(struct Array *ob, int element)
{
    for (int i = 0; i < ob->length ; i++)
    {
        if (ob->A[i] == element)
        {
            Swap(&ob->A[i], &ob->A[i - 1]);
            return i ;
        }
    }
    return -1;
}

// Move to front/head
int Searchi(struct Array *ob, int element)
{
    for (int i = 0; i < ob->length ; i++)
    {
        if (ob->A[i] == element)
        {
            Swap(&ob->A[i], &ob->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    printf("Index is %d \n ", Search(arr, 5));

    // printf("Index of 3 is %d \n ", Searcho(&arr, 3));
    // display(arr);
    // printf("Index of 3 is %d \n ", Search(arr, 3));

    // printf("Index of 3 is %d \n ", Searchi(&arr, 3));
    // display(arr);
    // printf("Index of 3 is %d \n ", Search(arr, 3));

    return 0;
}