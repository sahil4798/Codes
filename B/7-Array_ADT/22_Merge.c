#include <stdio.h>
#include <stdlib.h>

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

struct Array* Merge(struct Array *obj1, struct Array *obj2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *obj3;
    obj3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < obj1->length && j < obj2->length)
    {
        if (obj1->A[i] > obj2->A[j])
        {
            obj3->A[k++] = obj2->A[j++];

            // obj3->A[k] = obj2->A[j];
            // k++, j++;
        }
        else
        {
            obj3->A[k++] = obj1->A[i++];

            // obj3->A[k] = obj2->A[i];
            // k++, i++;
        }
    }

    for (; i < obj1->length; i++)
        obj3->A[k++] = obj1->A[i];

    for (; j < obj2->length; j++)
        obj3->A[k++] = obj2->A[j];

    obj3->length = obj1->length + obj2->length;
    obj3->size = 20;

    return obj3;
}

int main()
{

    struct Array arr1 = {{1, 5, 8, 10, 13, 16, 25}, 10, 7};
    struct Array arr2 = {{0, 2, 9, 12, 14, 20}, 10, 6};

    // struct Array arr3 ={{0 } , arr1.length+arr2.length , arr1.length+arr2.length };
    // Merge(&arr1 , &arr2 , &arr3);
    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);
 
    return 0;
}