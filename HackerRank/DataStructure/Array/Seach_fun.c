#include <stdio.h>
//search for 4 and Delet

void arropp( int n , int arr[50] , int element){
    for(int i=0  ; i<=n  ; i++){
    if(arr[i] ==element){
        printf("The index of %d  is %d\n" , element, i);
        printf("The Position of %d is %d\n", element , i+1);
      break;
    }
    if(i==n){
        printf("element is not exist in array");
    }
  
}

}
int main() {
     
      int n , element ;
      int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d" , &n);
    

    printf("Enter the Elements of array \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

    printf("Enter the element which is requird to find \n");
    scanf("%d" , &element);
  
    arropp(n , arr , element);


    return 0;
}








// #include <stdio.h>

// void search(int arr[] , int n , int element){
//     for(int i=0 ; i<n ; i++){
//         if(arr[i]==element){
//             printf("the position of %d is %d" , element , i);
//             break;
//         }
//     }
// }

// int main() {
   
//    int arr[50] , element , n ;
   
//    printf("Enter the Capacity of array Between 1 to 50 \n");
//    scanf("%d" , &n );
   
//    printf("Enter the elements array \n");
//    for(int i=0 ; i<n ; i++){
//        scanf("%d", &arr[i]);
//    }
   
// printf("Enter the elements , which have to be search in array \n");
// scanf("%d" , &element) ;
 
//  search( arr , n , element ) ;
   
   
//     return 0;
// }
