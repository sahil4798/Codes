#include<stdio.h> 
 
 float expo(int x , int n)
 {
   float s = 1;
   int N=1;
   int D=1;

   for(int i=1 ; i<=n ; i++)
   {
    N *=x ;
    D *=i;
    s += (float)N/D;
   }
   return s;
 }

int main(){ 
 
printf("%f \n", expo(1, 20));
 
 

return 0;
}



// #include<stdio.h> 

// float expo(int x, int n)
// {  
//     float s = 1 ;  //probem is here

//     for(int i=n ; i>0 ; i--)
//     {
//         s += (float)x/n*s;

//     }
//     return s;
// }

// int main(){ 
 

//  printf("%f\n" , expo( 1 , 30) );
 

// return 0;
// }