#include <stdio.h>
#include <limits.h>

int lar , seclar ;

void     largest(int arr[] , int n ){
 
 lar=seclar= INT_MIN ;

 for ( int i =0 ; i<n ; i++){

    if(arr[i]> lar){
        seclar= lar;
        lar=arr[i];
        
    }

    else if( arr[i]>seclar && arr[i]<lar){
       seclar=arr[i];
    }    
 }
  
}

void print(void){
    printf("The largest number in array is %d  \n " , lar);
    printf("The Second largest number in array is %d  \n " , seclar);
}

int main(){

int n , element ;
   
   
    int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d" , &n);
    

    printf("Enter the Elements of array \n");
    for(int i=0 ; i<n ; i++ ){
     scanf("%d" , &arr[i]);
    }
    
    largest( arr , n ); 
    print();
    

    return 0;
}