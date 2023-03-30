#include <stdio.h>
#include <stdlib.h>
#include "3_Chaining.h"
// #include "0.h"

void Chaining(int A[], int n, int key)
{
  struct Node *HT[10];
  int i;
  struct Node *temp;
  // printf("checkpoint 1\n");

  for (i = 0; i < 10; i++)
    HT[i] = NULL;
  // printf("checkpoint 2\n");

  for (i = 0; i < n; i++)
  {
    InsersionSorted(&HT[A[i] % 10], A[i]);

  }

  // printf("checkpoint 3\n");

  temp = Search(HT[key % 10], 16);
  printf(" %d \n", temp->data);
}

int main()
{

  int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
  Chaining(A, 9, 16);

  printf("Finish \n");

  // struct Node *HT[10];
  // int i;
  // struct Node *temp;

  // for (i = 0; i < 10; i++)
  //   HT[i] = NULL;


  // InsersionSorted (&HT[16 % 10], 16);
  // InsersionSorted (&HT[10 % 10], 10);
  // InsersionSorted (&HT[22 % 10], 22);
  // InsersionSorted (&HT[43 % 10], 43);
  // InsersionSorted (&HT[36 % 10], 36);


  // temp = Search(HT[16 % 10], 16);
  // printf(" %d \n", temp->data);

  return 0;
}