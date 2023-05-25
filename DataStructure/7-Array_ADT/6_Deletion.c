#include<stdio.h> 
 
 struct Array
 {
    int A[20];
    int size;
    int length;
 };
 void display(struct Array ob)
 {
   for(int i= 0  ; i<ob.length ; i++)
   {
    printf(" %d " , ob.A[i] );
   }
   printf(" \n ");
 }

 int Delete(struct Array *ob , int index)
 {   
    int x = 0; 
    if(index>=0 && index< ob->length)
    {
      x = ob->A[index];
     
     for(int i = index ;  i<ob->length-1   ; i++)
     {
      ob->A[i] = ob->A[i+1];
     }
     ob->length--;
      return x;
    
    }

     return 0;
 }

int main(){ 
 
 struct Array arr = { {1,2, 3, 4, 5}  , 10  , 5 };
 display(arr);
 printf("%d \n " ,Delete( &arr , 5));
 display( arr);
 
 

return 0;
}