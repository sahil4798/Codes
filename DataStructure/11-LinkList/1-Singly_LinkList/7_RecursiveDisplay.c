#include<stdio.h> 
#include<stdlib.h> 
 
struct Node
{
    int data;
    struct Node *next;
}*first=NULL  ; 

void Create(int A[] , int n)
{  
    int i;
   struct Node *t , *last;
   first =(struct Node *)malloc(sizeof(struct Node));
   first->data=A[0];
   first->next = NULL;
   last=first;

   for(i=1; i<n  ; i++)
   {
      t= (struct Node*)malloc(sizeof(struct Node));
      t->data =A[i];
      t->next =NULL;
      last->next =t;
      last =t;  

   }
}
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d " , p->data);
        RDisplay(p->next);
    
    }
}

int main(){ 

int A[] ={ 11 , 22 , 33 , 44 , 55 , 66};

Create(A , 6);
RDisplay(first);

return 0;
}