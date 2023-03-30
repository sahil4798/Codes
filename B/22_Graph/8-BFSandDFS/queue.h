#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int data;
    int front;
    int rare;
    int *Q;
};

void Create(struct Queue *q)
{
    printf("Enter the size of Queue :");
    scanf("%d", &q->size);
    q->front = q->rare = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void Display(struct Queue *q)
{
    for (int i = q->front+1 ; i < q->rare + 1; i++)
        printf(" %d ", q->Q[i]);

    printf("\n");
}

void Enqueue(struct Queue *q, int key)
{
    if (q->rare == q->size - 1)
        printf("Queue is Full \n ");
    else
    {
        q->rare++;
        q->Q[q->rare] = key;
    }
}

int Dequeue(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rare)
        printf("Queue is Full");

    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

int Isfull(struct Queue q)
{
    if(q.rare == q .size-1)
    return 1;
    else 
    return 0;
}

int Isemplty(struct Queue q)
{
    return q.front == q.rare ? 1 : 0 ;
    
}





