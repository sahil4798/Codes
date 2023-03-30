#include<stdio.h> 
 

int main(){ 
 

int **p;
// int *q ;
int a =5;

// **p = *q;
// *q = a;

*p =&a;

printf("The value of a is %d" , a);
// printf("The value of a is %d" , **p);
// printf("The value of a is %d" , *p);



 

return 0;
}