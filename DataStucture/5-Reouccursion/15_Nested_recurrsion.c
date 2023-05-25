#include<stdio.h> 
 
 int fun(int x)
 {
   if(x>100){
    return x-10;
   }
   else{
    return fun(fun(x+11));
   }
 }


int main(){ 
 

 printf("%d" , fun(95));
 

return 0;
}