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
    
    for(int i=0 ; i<ob.length; i++)
    {
      printf(" %d " , ob.A[i] );
    }
   printf("\n");
}  




int main()
{ 
   
struct Array obj = {{1 , 2 ,3  ,4 ,5 } , 10 , 5};
display(obj);



return 0;
}