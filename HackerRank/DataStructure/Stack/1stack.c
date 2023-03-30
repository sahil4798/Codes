#include<stdio.h> 
#include<stdlib.h> 
 
 struct  stack
 {
    int size;
    int top;
    int *arr;

 };

 void create(struct stack *s){
   printf("enter the size");
   scanf("%d" , &s->size);
   s->top =-1 ;
   s->arr = (int*)malloc(s->size *sizeof(int));

 }

 int empty( struct stack *ptr){

    if (ptr->top==-1){
     return 1;
    }
    else{
        return 0;
    }
 }
 int full( struct stack *ptr){

    if ( (*ptr).top == ptr->size-1){
     return 1;
    }
    else{
        return 0;
    }
 }
 


int main(){ 

//  struct stack s {
//  s.size = 50;
//  s.top=-1;
//  s.arr = (int *) malloc(s.size * sizeof(int));
 
//  struct stack *s ;
//  s->size = 50;
//  s->top=-1;
//  s->arr = (int *)malloc(s->size * sizeof(int));


   
   struct stack s ;
   create(  &s);


  if(empty(&s)){
   printf("stack is empty");
  }
  else{
        printf("The stack is not empty");
    }
 

return 0;
}