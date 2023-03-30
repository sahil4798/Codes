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

int main()
{

  struct Array arr = {{2, 4, 5, 3, 6, 7, 9, 8, 1, 0}, 20, 10};

  //  printf("%d" , Get(arr , 1));
  //  printf("%d \n " , Set(& arr , 1 , 111));
  //  Display(arr);

  printf("%d \n", Max(arr));
  printf("%d \n", Min(arr));

  printf("%d \n", Sum(arr));
  printf("%f \n", Avg(arr));

  return 0;
}