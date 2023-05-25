#include<stdio.h> 
#include<stdlib.h> 
struct Node
{
  int data ;
  struct Node *next;
}; 
// struct Node *top = NULL;

struct Stack
{
    struct Node *top = NULL;

};


void Display(struct Node *st)
{   
    struct Node *t = st;
    while(t)
    {
        printf("%d " , t->data );
        t = t->next;
    }
    printf("\n");
}

void push( struct Node *st ,int x)
{   
    
    struct Node *t = (struct Node*)malloc(sizeof(struct Node)); 
    if(t==NULL)
        printf("LinkList is overflow \n");
    
    else
    {
        t->data = x;
        t->next = st;
        st = t;
    }
}

// int pop(struct Node *st)
// {   
    
//     int x =-1;
//     struct Node * t;
//     if(st==NULL)
//     printf("Linklist is Empty ");

//     else
//     {   
//         t = st;
//         top = top->next;
//         x= t->data;
//         free(t);
//     }
//     return x;
// }




int main(){ 
 
struct Node *top =NULL;

push(top ,  10);
push(top ,20);
push(top ,30);
push(top ,40);
// Display(top );


// printf("%d "  , pop() );
// printf("%d "  , pop() );




return 0;
}