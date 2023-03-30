#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
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

void Insertsion(int arr[], int size, int *length, int index, int element)
{
    if (index > size || (index = size && size == *length))
    {
        printf("Array is overflow \n");
    }

    else
    {
        for (int i = *length; i > index; i--) // 0 1 2 3 4 5
        {
            arr[i] = arr[i - 1]; // arr[6]=arr[5];
        }
        arr[index] = element;
        *length++;
    }
}

int Delete(struct Array *ob, int index)
{
    int x = 0;
    if (index >= 0 && index < ob->length)
    {
        x = ob->A[index];

        for (int i = index; i < ob->length - 1; i++)
        {
            ob->A[i] = ob->A[i + 1];
        }
        ob->length--;
        return x;
    }

    return 0;
}

int Search(struct Array ob, int key)
{
    for (int i = 0; i < ob.length; i++)
    {
        if (ob.A[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int Get(struct Array obj, int index)
{
  int e;
  if (index >= 0 && index < obj.length)
  {
    e = obj.A[index];
    return e;
  }
  return -1;
}

int Set(struct Array *obj, int index, int x)
{

  if (index >= 0 && index < obj->length)
  {
    obj->A[index] = x;
    return x;
  }
  return -1;
}

int Max(struct Array obj)
{
  int max = obj.A[0];
  for (int i = 1; i < obj.length; i++)
  {
    if (obj.A[i] > max)
    {
      max = obj.A[i];
    }
  }
  return max;
}

int Min(struct Array obj)
{
  int min = obj.A[0];
  for (int i = 1; i < obj.length; i++)
  {
    if (obj.A[i] < min)
    {
      min = obj.A[i];
    }
  }
  return min;
}

int Sum(struct Array obj)
{
  int sum = 0;
  for (int i = 0; i < obj.length; i++)
  {
    sum = sum + obj.A[i];
  }
  return sum;
}

float Avg(struct Array obj)
{
  float sum = 0;
  for (int i = 0; i < obj.length ; i++)
  {
    sum = sum + obj.A[i];
  }
  return sum/obj.length ;
}

void Reverse1(struct Array *obj)
{
    //   int B[obj->length];
    int *B; 
    B = (int *) malloc(obj->length*sizeof(int));
    
    for(int i= obj->length-1 ,  j=0 ; i>=0 ; i-- ,j++)
    {
    B[j] = obj->A[i];
    }

    for(int i= 0 ; i<obj->length ; i++ )
    {
    obj->A[i] = B[i] ;
    }

}

void FShift(struct Array *obj)
{   
    for(int i =0 ; i<obj->length-1 ; i++)
    {
    obj->A[i]=obj->A[i+1] ;
    }
    obj->A[obj->length-1]=0;
}
void BShift(struct Array *obj)
{   
    for(int i =obj->length-1; i>=0 ; i--)
    {
    obj->A[i]=obj->A[i-1] ;
    }
   obj->A[0]=0;
    
} 

void FRoatate(struct Array *obj)
{   
    int temp =  obj->A[0]; 
    for(int i=0 ; i<obj->length-1 ; i++)
    {
        obj->A[i] = obj->A[i+1];
    }
    obj->A[obj->length-1]=temp;
}

void BRoatate(struct Array *obj)
{   
    int temp =  obj->A[obj->length-1]; 
    for(int i=obj->length-1; i>=0 ; i--)
    {
        obj->A[i] = obj->A[i-1];
    }
    obj->A[0]=temp;
}


int main()
{
    struct Array ob = {{1, 2, 3, 4, 5}, 10, 5};
    display(ob);

    return 0;
}