#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coff;
    int exp;
    struct Node *next;
} *first = NULL;

struct Node * Create(  )
{
    int n;
    printf("Enter the Total numbers of terms in polynomial  :");
    scanf("%d", &n);
    int A[n];
    int B[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of coff and expo of %d term : ");
        scanf("%d%d", &A[i], &B[i]);
    }
    struct Node *N = NULL;
    struct Node *t, *last;


    for (int j = 0; j < n; j++)
    {

        if (N == NULL)
        {
            t = (struct Node *)malloc(sizeof(struct Node *));
            t->coff = A[j];
            t->exp = B[j];
            t->next = NULL;
            
            last= N = t;
        }
        else
        {
            t = (struct Node *)malloc(sizeof(struct Node *));
            t->coff = A[j];
            t->exp = B[j];
            t->next = NULL;
            last->next = t;
            last = t;
        }
    }

    return N;
}

void Display(struct Node *N )
{   
    struct Node *p = N;
    while(N!=NULL)
    {
        printf("%d %d \n" , p->coff , p->exp  );
        p = p->next;
    }
    printf("\n");
}


int main()
{
    struct Node *N =NULL;
    int A[] ={10 , 20 , 30 , 40}; 
    int B[] ={5 , 4 , 1 , 0}; 
    N = Create( );
    Display(N);

    return 0;
}