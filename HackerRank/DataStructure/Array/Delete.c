#include <stdio.h>
int main()
{
     int n , index ;
    int arr[50];

    printf("Enter the capacity of aaray \n");
    scanf("%d" , &n);
    
    printf("Enter the Elements of aaray \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }

    for(int i=0 ; i<n ; i++ ){
     printf("%d " , arr[i]);
    }
   
    printf("\n Enter the indexof element which is requird to Delete \n");
    scanf("%d" , &index);

    for(int i= index ; i<n ; i++){
        arr[i] = arr[i+1];
    }
   
     for(int i=0 ; i<n-1 ; i++ ){
     printf("%d " , arr[i]);
    }
  

    return 0;
}
