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
    int i, j, k;
    i = j = k = 0;
    struct Array *obj3;
    obj3 = (struct Array*)malloc(sizeof(struct Array));

    while(i < obj1->length && j< obj2->length)
    {
        if(obj1->A[i] < obj2->A[j])
        {
            obj3->A[k++] = obj1->A[i++];
        }
        
        else if(obj2->A[j]<obj1->A[i])
        {
            obj3->A[k++] = obj2->A[j++];
        }

        else
        {
          obj3->A[k++] =obj1->A[i++];
          j++;
        }

    }

    for(  ; i<obj1->length ; i++)
    {
      obj3->A[k++]=obj1->A[i];
    }
    for(  ; j<obj2->length ; j++)
    {
      obj3->A[k++]=obj2->A[j];
    }
    obj3->length = k;
    obj3->size=20;

    return obj3;
}


struct Array *Intersection(struct Array *obj1, struct Array *obj2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *obj3;
    obj3 = (struct Array*)malloc(sizeof(struct Array));

    while(i < obj1->length && j< obj2->length)
    {
        if(obj1->A[i] < obj2->A[j])
        {
           i++;
           
        }
        
        else if(obj2->A[j]<obj1->A[i])
        {
    
            j++;
        }

        else
        {
          obj3->A[k++] =obj1->A[i++];
          j++;
        }

    }

    

    obj3->length = k;
    obj3->size=20;

    return obj3;
}

struct Array *Difference(struct Array *obj1, struct Array *obj2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *obj3;
    obj3 = (struct Array*)malloc(sizeof(struct Array));

    while(i < obj1->length && j< obj2->length)
    {
        if(obj1->A[i] < obj2->A[j])
        {
            obj3->A[k++] = obj1->A[i++];
        }
        
        else if(obj2->A[j]<obj1->A[i])
        {
            j++;
        }

        else
        {
          i++;
          j++;
        }

    }

    for(  ; i<obj1->length ; i++)
    {
      obj3->A[k++]=obj1->A[i];
    }
    obj3->length = k;
    obj3->size=20;

    return obj3;
}

    int main()
{
    struct Array arr1 = {{1, 8, 13, 25, 28, 50, 60 }, 10, 7};
    struct Array arr2 = {{2, 5,  8, 19, 25, 39}, 10, 6};
   
    struct Array *arr3;
    arr3 = Difference(&arr1, &arr2);
    Display(*arr3); 


    return 0;
}