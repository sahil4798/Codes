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
    // for (int i = q->front + 1; i < q->rare + 1; q->front+1= (q->front+1) % q->size  )
    //     printf(" %d ", q->Q[i]);
    int i =q->front;
    while(i!=q->rare)
    {
        printf(" %d " , q->Q[i]);
        i = (i+1)%q->size;
    }

    printf("\n");
}

void Enqueue(struct Queue *q, int key)
{
    if ((q->rare + 1) % q->size == q->front)
        printf("Queue is Full \n ");
    else
    {
        q->rare = (q->rare + 1) % q->size;
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
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int Isfull(struct Queue *q)
{
    if ((q->rare + 1) % q->size == q->front)
        return 1;
    else
        return 0;
}

int Isemplty(struct Queue *q)
{
    return q->front == q->rare ? 1 : 0;
}

int main()
{
    struct Queue q;
    Create(&q);
    Enqueue(&q, 11);
    Enqueue(&q, 22);
    Enqueue(&q, 33);
    Enqueue(&q, 44);
    Enqueue(&q, 55);
    Display(&q);

    printf("**********11111111111111111******** \n");
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Display(&q);


    printf("**********222222222222222222******** \n");
    Enqueue(&q, 66);
    Enqueue(&q, 77);
    Enqueue(&q, 88);
    Display(&q);

    return 0;
}