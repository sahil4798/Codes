#include<stdio.h> 
#include<stdlib.h> 

struct Node
{   
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *first = NULL;

void Create(int A[] , int n)
{
    struct Node *t , *last ;
    int i; 

    first =(struct Node*)malloc( sizeof(struct Node) );
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    last->next=NULL;

    for(i =1 ; i<n ; i++)
    {
        t =(struct Node*)malloc(sizeof(struct Node));
        t->data =A[i];
        t->prev = last;
        t->next=NULL;
        last->next = t;
        last =t;
    }
}

int Length(struct Node *p)
{   
    int len=0;
    while(p!=NULL)
    { 
       len++;
       p=p->next;
    }
    return len;
}

void Display(struct Node *p)
{
   while(p!=NULL)
   {
    printf("%d " , p->data);
    p=p->next;
   }
   printf("\n");
}

int Delete(struct Node*p , int pos )
{
    int x =-1;

    if(pos<1 ||pos>Length(first))
    {
        return x;
    }

    else if(pos==1)
    {
        first =first->next;

        if(first!=NULL)
        first->prev =NULL;

        x = p->data;
        free(p); 
    }
    
    else
    {
        for(int i=0 ; i<pos-1 ; i++)
         p = p->next;
        
        x = p->data;

        p->prev->next =p->next;
        if(p->next!=NULL)
        p->next->prev = p->prev;
        free(p);

        return x;
    }

}

int main(){ 

    int A[] = { 11 , 22 , 33 , 44 , 55 , 66};
    Create(A , 6);
    Delete(first,6);
    Display(first);
 

 
 

return 0;
}