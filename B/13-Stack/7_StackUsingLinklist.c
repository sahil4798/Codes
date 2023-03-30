#include<stdio.h> 
#include<stdlib.h> 
struct Node
{
  int data ;
  struct Node *next;
}; 
struct Node *top = NULL;

void Display()
{   
    struct Node *t =top;
    while(t)
    {
        printf("%d " , t->data );
        t = t->next;
    }
    printf("\n");
}

void push(int x)
{   
    
    struct Node *t = (struct Node*)malloc(sizeof(struct Node)); 
    if(t==NULL)
        printf("LinkList is overflow \n");
    
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(void)
{   
    
    int x =-1;
    struct Node * t;
    if(top==NULL)
    printf("Linklist is Empty ");

    else
    {   
        t = top;
        top = top->next;
        x= t->data;
        free(t);
    }
    return x;
}




int main(){ 
 
// struct Node p;
push(10);
push(20);
push(30);
push(40);
Display();


printf("%d "  , pop() );
printf("%d "  , pop() );




return 0;
}