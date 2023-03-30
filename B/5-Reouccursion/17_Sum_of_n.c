#include<stdio.h> 
 
 //recursive aproach
int Sum_of_N_natural(int n){
    if(n<0){
        return 0;
    }
    else{
        return  Sum_of_N_natural(n-1) + n  ;
    }
}

//itrative aproach
int sum(int n){
    int s= 0;
    for(int i=0 ; i<=n ; i++){
        s = s + i;
    }
    return s;
}

int main(){ 
 

int N;
printf("Enter the value of N ");
scanf("%d" , &N);
// printf("%d" , Sum_of_N_natural(N)) ;
printf("%d" , sum(N)) ;
 

return 0;
}