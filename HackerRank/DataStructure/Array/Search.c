#include <stdio.h>


int main() {
    int n , element ;
    int arr[50];

    printf("Enter the capacity of aaray \n");
    scanf("%d" , &n);
    
    printf("Enter the Elements of aaray \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

    printf("Enter the element which is requird to find \n");
    scanf("%d" , &element);

    for(int i=0 ; i<=n ; i++){

        if(arr[i] == element){
            printf("The index if %d is %d\n" , element , i);
            break;
        }

        if(i==n){
        printf("element is not exist in array");
    
    } 
    }
   

    return 0;
}