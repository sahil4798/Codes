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
void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d " , p->data);
        p=p->next;
    }
}

int Length(struct Node* p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

int main(){ 

int A[] ={ 11 , 22 , 33 , 44 , 55 , 66};

Create(A , 6);
Display(first);

printf(" \n %d\n" ,Length(first));

return 0;
}