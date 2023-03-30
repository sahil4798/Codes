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
int Counting(struct Node *p)
{
    int i = 0;
    while (p) // while(p)==while(p!=NULL)
    {
        i++;
        p = p->next;
    }
    return i;
}

// void Insersion(int index, int element)
// {
//     if (index < 0 || index > Counting(first))
//         printf("Index is Invalid \n");

//     struct Node *p, *t;
//     t = (struct Node *)malloc(sizeof(struct Node));

//     if (index == 0)
//     {
//         t->data = element;
//         t->next = first;
//         first = t;
//     }
//     if (index != 0)
//     {
//         p = first;
//         for (int i = 0; i < index - 1; i++)
//             p = p->next;

//         t->data = element;
//         t->next = p->next;
//         p->next = t;
//     }
// }

void Insersion(struct Node *p , int index, int element)
{
    if(index<0 || index > Counting(p))
        // printf("Index is Invalid \n");
        return ;

    struct Node  *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (index == 0)
    {
        t->data = element;
        t->next = first;
        first = t;
    }
    if (index != 0)
    {

        for (int i = 0; i < index - 1; i++)
            p = p->next;

        t->data=element;
        t->next=p->next;
        p->next =t ;
    }
}

int main()
{

    // int A[] = {11, 22, 33, 44, 55, 66};
    // Create(A, 6);
    // Insersion(first , 10, 0);
    // Display(first);
    

    Insersion(first , 0, 11);
    Insersion(first , 1, 22);
    Insersion(first , 2, 33);
    Insersion(first , 3, 44);
    Insersion(first , 4, 55); 


    return 0;
}