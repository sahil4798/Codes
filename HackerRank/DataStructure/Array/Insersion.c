
#include <stdio.h>
void insersion(int arr[] , int n , int position , int element){
    for(int i= n-1 ; i>= position-1 ; i--){
     arr[i+1]= arr[i];
    } 
     arr[position-1]=element;

     for(int i=0 ; i<n+1 ; i++){
       printf("%d " , arr[i]);
      
   }
}
int main() {
    int arr[50] , position , n , element;
   
   printf("Enter the Capacity of array Between 1 to 50 \n");
   scanf("%d" , &n );
   
   printf("Enter the elements array \n");
   for(int i=0 ; i<n ; i++){
       scanf("%d", &arr[i]);
   }
   for(int i=0 ; i<n ; i++){
       printf("%d " , arr[i]);
      
   }
    printf("\n");
   
 printf("Enter the Position \n");
 scanf("%d" , &position) ;
 
 printf("Enter the ELement \n");
 scanf("%d" , &element);

insersion(arr , n , position, element);


    return 0;
}
