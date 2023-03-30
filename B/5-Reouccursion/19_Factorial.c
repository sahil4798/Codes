#include <stdio.h> 

int factorial(int n)
{   
    if(n<0)
    {
        return -1 ;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
    
}
int fact (int n)
{   
    int f =1 ;
    for(int i=1 ; i<=n ; i++)
    {
        f = f*i;
    }
    return f;

}

int main()
{ 
 
 int N = 0 ;
 printf("%d" ,factorial(N));
 
 printf(" \n%d" ,fact(N) );
     

return 0;
}