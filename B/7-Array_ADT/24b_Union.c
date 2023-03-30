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

struct Array *Union(struct Array *obj1, struct Array *obj2)
{
    struct Array *obj3;
    obj3 = (struct Array *)malloc(sizeof(struct Array));
    int k = 0;
    

                
    for (int i = 0; i < obj2->length; i++)
    {
        for (int j = 0; j < obj1->length; j++)
        {
            if ((obj3->A[j] != obj2->A[i]))
            {
                obj3->A[k] == obj2->A[i];
                k++;
            }
        }
    }

    obj3->length = k;
    obj3->size = k;
    return obj3;
} 

int main()
{
    struct Array arr1 = {{1, 15, 8, 78, 13, 26, 25}, 10, 7};
    struct Array arr2 = {{50, 15, 9, 1, 25, 3}, 10, 6};
    struct Array *arr3;
    arr3 = Union(&arr1, &arr2);
    Display(*arr3);

    return 0;
}