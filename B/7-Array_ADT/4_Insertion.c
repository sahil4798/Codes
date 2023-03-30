#include <stdio.h>

// void Insertsion(int arr[] , int size , int *length , int index , int element)
// {
//     if( index>size  || ( index=size  &&  size==*length )  )
//     {
//         printf("Array is overflow \n");
//     }

//     else
//     {
//     for(int i=*length ; i>index ; i--)           // 0 1 2 3 4 5
//     {
//       arr[i] =arr[i-1];    // arr[6]=arr[5];
//     }
//       arr[index] = element;
//       *length++;

//     }
// }
void Insertsion(int arr[], int size, int *length, int index, int element)
{
   if(index>=0 || index<=*length)
    {
    for (int i = *length; i > index; i--) // 0 1 2 3 4 5
    {
      arr[i] = arr[i - 1]; // arr[6]=arr[5];
    }
    arr[index] = element;
    *length++;
  }
}

void display(int A[], int length)
{
  printf("The element of array are : ");

  for (int i = 0; i < length; i++)
  {
    printf(" %d ", A[i]);
  }
  printf("\n");
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6};
  int length = 6;
  int size = 10;
  display(arr, length);

  int index = 3;
  int element = 0;
  Insertsion(arr, size, &length, index, element);
  display(arr, length);

  // printf("%d" ,arr.length());
  return 0;
}