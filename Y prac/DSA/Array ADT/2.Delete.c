#include<stdio.h>
#include<stdlib.h>


struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct  Array ob)
{ 
    printf("The element of array are : "); 
    
    for(int i=0 ; i<ob.size ; i++)
    {
      printf(" %d " , ob.A[i] );
    }
   printf("\n");
}  

int Delete(struct Array *obj , int index)
{  
  int x =-364648; 
  if(index<0 && index>obj->length-1)
   {
   printf("Index is Invalid \n");
   return x;
   }

   else
   x =obj->A[index];
   for(int  i=index ; i<obj->length-1 ; i++)
   { 
     obj->A[i]=obj->A[i+1];
   }
   obj->length--;

     return x;
}


int main()
{ 
   
struct Array obj = {{1 , 2 ,3  ,4 ,5 } , 10 , 5};
display(obj);

int temp = Delete(&obj , 2);
printf("%d \n ", temp);
display(obj);

return 0;
}