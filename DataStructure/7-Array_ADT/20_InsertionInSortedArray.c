#include <stdio.h>
struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array obj)
{
    for (int i = 0; i < obj.length; i++)
    {
        printf(" %d ", obj.A[i]);
    }
}

void InsertInSorted(struct Array *obj, int x)
{
    if (obj->length == obj->size)
    {
        return;
    }

    int i = obj->length - 1;
    while (obj->A[i] > x && i >= 0)
    {
        obj->A[i + 1] = obj->A[i];
        i--;
    }
    obj->A[i + 1] = x;
    obj->length++;
}

int CheckSorted(struct Array obj)
{
    for (int i = 0; i < obj.length - 1; i++)
    {
        if (obj.A[i] > obj.A[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Rearrange(struct Array *obj)
{
    int i = 0, j = obj->length - 1;

    while (i < j)
    {
        while (obj->A[i] < 0)
        {
            i++;
        }
        while (obj->A[j] > 0)
        {
            j--;
        }
        if(i <= j)
        {
            Swap(&obj->A[i], &obj->A[j]);
        }
    }
}

int main()
{
    struct Array arr = {{0, 3, -7, -10, 12, 15, -17, 20, -29, -35}, 20, 10};

    // InsertInSorted(&arr, 9);
    // Display(arr);

    // printf( "%d" ,CheckSorted(arr) );

    Rearrange(&arr);
    Display(arr);

    return 0;

}