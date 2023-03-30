#include<stdio.h> 
void Swap(int *A , int *B)
{
    int temp = *A ;
    *A= *B;
    *B=temp;
}

void BubbleSort(int A[] , int n)
{ 
    int i,  j, k; 
  for ( i=0 ; i< n-1 ; i++)
  {
     j =k =i;
     for( ; j<n ; j++)
     {
        if(A[j] <A[k])
           k =j;
     }
    
     Swap(&A[k] , &A[i]);
  }
}

int main(){ 
 

int A[] ={  4 , 2 , 5 , 1 , 9 , 8 , 6 , 7}; 
 BubbleSort(A , 8);
 for(int i =0 ; i<8 ; i++)
  printf(" %d " , A[i]);
 

return 0;
}