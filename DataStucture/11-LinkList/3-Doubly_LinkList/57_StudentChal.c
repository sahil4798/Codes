#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
struct Node *second = NULL;

void Create1(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int Length(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
} 

struct Node *  mergingposition(struct Node *p , struct Node *q)
{   
    struct Node *temp =q ;
    int m=Length(p);
    int n=Length(q);
    for(int i=0 ; i<m ; i++)
    {   
        q =temp;
        for(int j=0 ; j<n ; j++)
        {    
            if(p==q)
            return q;

            q = q->next;
        }
        p = p->next;
    }

}



int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};
    Create1(A, 6);
    Display(first);
  
    int B[] = {1, 2};
    Create2(B, 2);
    Display(second);

    struct Node *p  , *q ;
    p = first->next->next->next;
    q = second->next;
    q->next=p;
    

    printf("After looping \n");
    Display(second);


    struct Node * temp = mergingposition(first , second);
    printf("%d \n " ,temp->data);

    return 0;
}