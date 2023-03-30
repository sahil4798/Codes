#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *M;
    int n;
};

void Set(struct Matrix *obj , int i , int j , int x)
{
    if(i==j)
    {
        obj->M[i-1]=x;
    }
}

int Get(struct Matrix obj , int i , int j)
{
    if(i==j)
    {
      return obj.M[i-1];
    }
    else
    return 0;
}

void Display(struct Matrix obj)
{
    int i , j;
  for( i=0 ; i<obj.n ; i++)
  {
    for(j=0 ; j<obj.n ; j++)
    { 
      if(i==j)
      printf("%d " , obj.M[i]);
      else
      printf("%d " , 0);
    }
    printf("\n");
  }
}
int main()
{

    struct Matrix obj;
    obj.n = 4;
    obj.M = (int *)malloc(obj.n * sizeof(int));

    Set(&obj , 1 , 1 , 10);
    Set(&obj , 2 , 2 , 20);
    Set(&obj , 3 , 3 , 30);
    Set(&obj , 4 , 4 , 40);
    printf("%d \n ",Get(obj , 1 , 1 ));
    printf("\n");
    Display(obj);

        return 0;
}