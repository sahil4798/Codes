struct Queue
{
    struct Node *data;
    struct Queue *next;
} *rare = NULL, *front = NULL;

void Enqueue(struct Node *B)
{
    struct Queue *t;
    t = (struct Queue *)malloc(sizeof(struct Queue));

    if (t == NULL)
        printf("Queue is Full \n");

    else
    {
        t->data = key;
        t->next = NULL;
        if (front == rare == NULL)
            rare = front = t;
        else
        {
            rare->next = t;
            rare = t;
        }
    }
};

struct Node *Dequeue()
{
    struct Node *x = NULL;
    if (front == rare == NULL)
        printf("Queue is Empty \n")

            else
        {
            struct Queue *t;
            t = front;
            x = front->data;
            front = front->next;
            free(t);
        }
    return x;
}