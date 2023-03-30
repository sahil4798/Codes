#include<stdio.h> 
 
 void binary_search(int arr[] , int n , int element , int f , int l){
   int m;
//  m = int( (f+l)/2  ) +1 ;
     m= ((f+l)/2) - 1;

   if(arr[m]== element ){
     printf("%d is at %d position \n", element , m+1);
   
   }
   else if ( arr[m]<element)
   {
     binary_search( arr ,  n ,  element ,  m +1,  l);
    
   }
   else{
      binary_search( arr ,  n ,  element ,  f ,  m- 1);
   }

 }

int main(){ 
 

      int n , element ;
      int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d" , &n);
    

    printf("Enter a sorted array \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

    printf("Enter the element which is requird to find \n");
    scanf("%d" , &element);
    
    binary_search( arr ,  n ,  element ,  1 ,  n);
 

return 0;
}