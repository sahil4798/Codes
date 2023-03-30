#include<stdio.h> 
#include<stdlib.h> 

struct Array 
{
    int size ;
    int *A;
    int length;
};

void Display(struct Array obj)
{
    for(int i=0 ; i<obj.length ; i++  )
    {
        printf("%d " , obj.A[i]);
    }
    printf("\n");
}



int main(){ 

struct Array obj;
printf("Enter the size of array :");
scanf("%d" , & obj.size);
obj.A = (int*)malloc(obj.size*sizeof(int));
obj.length =0 ;

printf("Enter the no of element  you want to insert in array :");
scanf("%d" , &obj.length);
for(int i=0  ; i<obj.length ; i++)
{
    printf("Enter the %d element of array :" , i);
    scanf("%d" , &obj.A[i]);
}

Display(obj);
 

return 0;
}