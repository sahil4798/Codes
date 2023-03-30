#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int n)
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
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int Maximum(struct Node *p)
{
    int max = -392893;   // -392893 = Minimun int;
    while (p)
    {
        if (p->data > max)
            max = p->data;

        p = p->next;
    }
    return max;
}

int RMaximum(struct Node *p)
{
    int max = -392893; // MIN_INT

    if(p==0)
    return max ;
    
    max= RMaximum(p->next);
    if(max>p->data)
    return max;

    else
    return p->data;


}

int main()
{

    int A[] = {11, 22, 33, 44, 55, 66};

    Create(A, 6);
    Display(first);
    printf("\nMaximum in node = %d \n" , Maximum(first));
    printf("\nRMaximum in node = %d \n" , RMaximum(first));

    return 0;
}