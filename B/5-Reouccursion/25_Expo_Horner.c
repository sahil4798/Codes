#include<stdio.h> 

double expo(int x, int n) 
{
    static float s=1;
    if(n==0)
    {
        return s;
    }
     
    s = 1 + ((float)x/n)*s ;
     return expo( x , n-1); 

}

int main(){ 
 

 printf("%f \n" , expo(1 , 10));
 

return 0;
}