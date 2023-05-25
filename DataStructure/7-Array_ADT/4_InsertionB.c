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
    
    for(int i=0 ; i<ob.length ; i++)
    {
      printf(" %d " , ob.A[i] );
    }
   printf("\n");
}  

void Insertion(struct Array *ob , int index , int element )
{
    
    
    if(index>=0 || index<=ob->length)
    {
    for(int i= ob->length ; i>index ; i--)           // 0 1 2 3 4 5   
    {
      ob->A[i] =ob->A[i-1];    // arr[6]=arr[5];
    } 
      ob->A[index] = element;
      ob->length++;

    }
}
 
void Append(struct Array *ob , int x)     
{  
    if(ob->length<=ob->size)
    {
    ob->A[ob->length]=x;
    ob->length++;
    }
}


int main()
{ 
    struct Array arr = {{1 ,2 ,3 , 4 , 5} , 10 , 5};
    display(arr);

    // Append(&arr, 6);     
    // display(arr);
   
    Insertion(&arr , 2 , 0 );
    display(arr);

    

return 0;
}