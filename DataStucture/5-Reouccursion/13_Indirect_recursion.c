#include<stdio.h> 
void funB(int x);

void funA(int x)
{
  if(x>0){
    printf(" %d " , x);
    funB(x-1);
  }
}

void funB(int x)
{
  if(x>0){
    printf(" %d " , x);
    funA( (int)(x/2));
  }
}

int main(){ 
 
int n=20 ;
funA(n);
 
 

return 0;
}