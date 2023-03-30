#include <stdio.h>

int main() {
    int n , element , index ;
    int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d" , &n);
    
    printf("Enter the Elements of array \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

     for(int i=0 ; i<n ; i++){
        printf(" %d " , arr[i]);
    }
     printf("\n") ;

    printf("Enter the element which is requird to find and delete \n");
    scanf("%d" , &element);

    for(int i=0 ; i<=n ; i++){

        if( arr[i] == element ){
             printf("The index of %d is %d\n" , element , i);
              index=i;
             break;
         }
        if(i==n){
          printf("Element is not exist in array \n");
        }
   
    }  

   
     for(int i=index ; i<n  ; i++){
        arr[i] = arr[i+1];
     }
     
      for(int i=0 ; i<n-1 ; i++){
        printf(" %d " , arr[i]);
      }


    return 0;
}
















