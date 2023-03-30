#include<stdio.h> 
// int fac(int n) 
// {   
//     if(n<0)
//     {
//         return -1;
//     }
//     else if(n==0)
//     { 
//         return 1;
//     }
    
//         return fac(n-1)*n;
// }

// int C (int n , int r)
// {   
//     int N , D;
//     N= fac(n);
//     D= fac(r)*fac(n-r);
//     return N/D;
// }

int NCR(int n , int r)
{
 if(r==0 || n==r )
    {
        return 1;
    }
   
   return NCR(n-1 , r-1) + NCR(n-1 , r);

}

int main(){ 
 
// printf("%d \n" ,fac(4) );
// printf("%d \n" ,   C(4 , 2) );
 
 printf(" %d \n " , NCR( 4, 2));

return 0;
}