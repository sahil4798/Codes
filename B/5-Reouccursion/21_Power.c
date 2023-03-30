#include<stdio.h> 

int power1(int m , int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return power1(m , n-1)*m;
  }
} 

int power2(int m , int n)
{
    if (n==0)
    {
        return 1;
    }
    else if(n%2==0){
        return power2(m*m , n/2);
    }
    else
    {
      return m*power2(m*m , (n-1)/2); 
    }
    
} 

int power3(int m , int n)
{    
    int p=1;
    for(int i=1 ; i<=n ; i++)
    {
        p=p*m;
    }

    return p;
}

int main(){ 
 
int M=2 , N =4;
printf("%d \n" , power1(M ,N));
printf("%d \n" , power2(M ,N));
printf("%d \n" , power3(M ,N));
 
 

return 0;
}