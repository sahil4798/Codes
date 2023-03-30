#include<stdio.h> 

int power(int x , int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(x , n-1)*x;
    }
} 

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
}


float expo(int x , int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return expo(x , n-1)+(float)(power(x , n-1))/factorial(n-1)  ;
    }
} 

int main(){ 
 
 printf("%d \n" ,power(2, 4));
 printf("%d\n" , factorial(4));
 
 printf("%f \n" , expo( 1 , 30));

return 0;
}