#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int data)
{

    if (root == NULL)
    {

        struct node *node = (struct node *)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
    }
    else
    {

        struct node *cur;

        if (data <= root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }

        return root;
    }
}









struct Queue
{
    struct node *data;
    struct Queue *next;
} *front = NULL, *rare = NULL;

void Enqueue(struct node *key)
{
    struct Queue *q;
    q = (struct Queue *)malloc(sizeof(struct Queue));
    if (q == NULL)
        printf("Queue is full \n");

    else
    {
        q->data = key;
        q->next = NULL;
        if (front == NULL)
        {
            front = rare = q;
        }
        else
        {
            rare->next = q;
            rare = q;
        }
    }
}

struct node *Dequeue()
{
    struct node *x = NULL;
    struct Queue *q;
    if (front == NULL)
        printf("Queue is Empty \n");

    else
    {
        x = front->data;
        q = front;
        front = front->next;
        free(q);
    }
    return x;
}

int IsEmpty()
{
    if (front == NULL)
        return 1;
    else
        return 0;
}

void levelOrder(struct node *root)
{
    struct node *t, *p = root;
    struct Queue Q;
    printf("%d ", p->data);
    Enqueue(p);

    while (!(IsEmpty()))
    {
        t = Dequeue();
        if (t->left != NULL)
        {
            printf("%d ", t->left->data);
            Enqueue(t->left);
        }
        if (t->right != NULL)
        {
            printf("%d ", t->right->data);
            Enqueue(t->right);
        }
    }
}



















int main()
{

    struct node *root = NULL;

    int t;
    int data;

    scanf("%d", &t);

    while (t-- > 0)
    {
        scanf("%d", &data);
        root = insert(root, data);
    }

    levelOrder(root);
    return 0;
}
