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

int Counting(struct Node *p)
{   
    int i=0;
    while(p)     //while(p)==while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    return i;
    
}
int RCounting(struct Node *p)
{
    // if(p)
    // return RCounting(p->next) + 1;
    // else
    // return 0;

    if(p==0)
    return 0;
    else
    return RCounting(p->next)+1;

   
}

int Sum(struct Node *p)
{
    int sum =0;
    while(p)
    {
        sum = sum + p->data ;
        p = p->next;
    }
    return sum;
}

int RSum(struct Node *p)
{
    if(p==0)
    return 0;
    else
    return p->data + RSum(p->next);
}

int main(){ 

int A[] ={ 11 , 22 , 33 , 44 , 55 , 66};
Create(A , 6);
printf("Count of node = %d \n" ,Counting(first) );
printf("RCount of node = %d \n" ,RCounting(first) );
printf("Sum of node = %d \n" ,Sum(first) );
printf("RSum of node = %d \n" ,RSum(first) );



return 0;
}