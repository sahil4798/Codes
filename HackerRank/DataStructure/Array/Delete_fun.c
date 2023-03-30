#include <stdio.h>
//search for 4 and Delet

void delete( int n , int arr[50] , int index){
    for(int i=index  ; i<n ; i++){
       arr[i]=arr[i+1];
    }
    

}


int main() {
     
      int n , index ;
      int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d" , &n);
    

    printf("Enter the Elements of array \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

    for(int i=0 ; i<n ; i++ ){
     printf("%d " , arr[i]);
    }


    printf("Enter the index which is requird to delete \n");
    scanf("%d" , &index );
  
    delete(n , arr , index);

    for(int i=0 ; i<n-1 ; i++ ){
     printf("%d " , arr[i]);
    }


    return 0;
}
