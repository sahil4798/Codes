#include<stdio.h> 
#include<stdlib.h> 
 
struct  stack 
{
    int n ;
    int top ;
    int *arr;
};

void setdata(struct stack *ptr){
    printf("Enter the value of n \n");
    scanf("%d" , & ptr->n);
    ptr->top=-1;
    ptr->arr  = (int*) malloc( ptr->n * sizeof(int)) ;
} 

void display(struct stack ptr){
    for(int i = ptr.top ; i>-1  ; i--){ 
    printf("The %d elment of stack is : %d  \n " , i+1 , ptr.arr[i]);
    
    } 
}


void push( struct stack * ptr , int element){
    if(ptr->top == ptr->n-1 ){
    printf("stack overflow \n ");
    }

    else{
        ptr->top++;
        ptr->arr[ptr->top ] = element;

    }
}

int pop(struct stack *ptr ){

    int element = -1;
    if(ptr->top== -1){
        printf("stack underflow \n");
    }
    else{
        element = ptr->arr[ptr->top] ;
        ptr->top--;
    }
    return element;

}

int peek(struct stack ob , int position){
  int element =-1 ;
  if(ob.top-position+1< 0){
    printf("Stack underflow \n ");
  }

   element = ob.arr[ob.top-position+1];
  return element;
}

int isempty(struct  stack ob){
    if(ob.top==-1){
        // printf(" Stack is empty \n ");
        return 1;
    }
    return 0;
}

int isfull(struct  stack ob){
    
     return  ob.top== ob.n-1 ;
    // if(ob.top== ob.n-1){
    //     printf(" Stack is full \n ");
    // } 
}

// int displaytop(struct stack ob){
//     int element ;
//     if(ob.top ==-1){
//         printf("Stack is empty \n ");
//     }
//     else{
//        element = ob.arr[ob.top];
//     }

//     return element;
// }
int displaytop(struct stack ob){
    
    if(!isempty(ob)){
        return ob.arr[ob.top];
    }
   return 0 ;
}

int main(){ 
 
struct  stack o1;
setdata( &o1);

push(&o1 , 1);
push(&o1 , 2);
push(&o1 , 3);
display(o1);

// printf("%d \n" , pop(&o1) );
// printf("%d \n" , pop(&o1) );
// display(o1);
// printf("%d \n" , pop(&o1) );

// printf("%d \n " ,peek(o1 , 2 ) );


printf("%d \n" ,isempty(o1) );

printf("%d \n"  , isfull(o1) );

printf("%d \n"  , displaytop(o1) );


return 0;
}