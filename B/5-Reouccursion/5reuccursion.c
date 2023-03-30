#include<stdio.h> 
 
 void func1(int x) 
 {
    if(x>0){
        printf(" %d " , x);
        func1(x-1);
    }
 }

 void func2(int x) 
 {
    if(x>0){
        func2(x-1);
        printf(" %d " , x);
        
    }
 }

int main(){ 
 int n;
 printf("Enter the value of n \n");
 scanf("%d" , &n);
 func1(n);
 printf("\n");
 func2(n);

 
 

return 0;
}