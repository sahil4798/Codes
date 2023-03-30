#include<stdio.h> 
#include<stdlib.h> 
 

int main(){ 

// int A[10];



// above array have limitation its size is fix , so we will make a pointer and point it to array in heap
// int n;
// printf("Enter the value of n :");
// scanf("%d",&n);
int *A;  // int *A[]; is invalid declaration  
A = (int *)malloc(5*sizeof(int));
A[0]=10;
printf("%d \n" , A[0]);
A[1]=20;
printf("%d \n" , A[1]);

*A =0;
printf("%d \n" , *A);
*A++ ;
*A=100;
printf("%d \n" , *A);
 

printf("%d\n" , &A[0] );

int *B;
int C[] = {1 , 2, 3,4 , 5 };
B = C;
// printf("%d \n" , *B);
// printf("%d \n" , *B++);  
// printf("%d \n" , *B);

printf("%d\n " ,  B[0]);
printf("%d\n " ,  B[1]);

// pointer ptr pointing to a dynamic size array in heap in C++.
    int *ptr = new int[3];

    *ptr = 1;
    cout << "The value of a is : " << *ptr << endl;
    ++*ptr = 2;
    cout << "The value of a is : " << *ptr << endl;


return 0;
}