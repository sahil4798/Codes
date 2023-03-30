#include<stdio.h> 

// int y ; //Either we can use global variable instead 0f static variable

int func1(int x)
{
if(x>0){
return func1(x-1) + x ;    
}
return 0;
}

int func2(int x)
{
static int y=0;     //this is a static variable

if(x>0){
y++;
return func2(x-1) + y ;    
}
return 0;
}

int main(){ 

int n= 5;
printf("%d \n"  ,func1(n));

printf("%d \n" , func2(n));
printf("%d" , func2(n));
 
return 0;
}