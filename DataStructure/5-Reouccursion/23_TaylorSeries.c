#include<stdio.h> 

float expo(int x, int n) 
{   
    float r   ;
    static float p =1;
    static float f=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=expo(x , n-1);
        p=p*x;
        f=f*n;
        r +=  p/f;
        return r;
    }
    
}

int main(){ 
 
printf("%f \n" ,expo(1, 10) );
 
 

return 0;
}