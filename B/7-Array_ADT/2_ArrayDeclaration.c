#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

// struct Array{
//     int A[10];
//     int size;
//     int length;
// };

void display(struct  Array ob)
{ 
    printf("The element of array are : "); 
    
    for(int i=0 ; i<ob.length ; i++)
    {
      printf(" %d " , ob.A[i] );
    }
   printf("\n");
}  


int main()
{ 
    struct Array arr;
    int n ; //Number of element in the arr 
    printf("Enter the size of array :");
    scanf("%d" , &arr.size);
    arr.A = (int*)malloc(arr.size*sizeof(int));
    arr.length=0; 

    printf("Enter the number of element in array ");
    scanf( "%d" , &n );
    
    printf("Enter the element of array \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr.A[i]);
    }
    arr.length=n;
   
    display(arr);
    
    
    // struct Array ob = {{1, 2, 3, 4, 5} , 10 , 5};
    // display(ob);


return 0;
}