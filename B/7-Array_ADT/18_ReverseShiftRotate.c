#include<stdio.h> 
#include<stdlib.h> 
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
void Swap(int *x ,int *y)
{
    int temp =*x;
    *x=*y;
    *y =temp;
}

void Reverse2(struct Array *obj)
{
    int i , j;
    for(int i =0 , j=obj->length-1 ; i<obj->length ; i++ ,j--)
    {
        if(i<=j)
        {
            Swap( &obj->A[i] ,& obj->A[j] );
        }
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

int main(){ 
 
struct Array arr = {{1 , 2, 3, 4, 5, 6, 7, 8, 9,10}, 20, 10};

//  Reverse1(&arr);
//  Reverse2(&arr);
//  Display(arr);
 
// FShift(&arr);
// BShift(&arr);
// Display(arr);

// FRoatate(&arr);
BRoatate(&arr);
Display(arr);



return 0;
}