struct Node
{
    int data;
    struct Node *next;
};

// void InsersionSorted(struct Node *p, int x)
// {
//     struct Node *q, *t;
//     q = NULL;
//     t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = x;
//     if (p == NULL)
//     {
//         t->next = NULL;
//         p = t;
//         // first = t;
//     }
//     else
//     {

//         while (p->data < x && p != NULL)
//         {
//             q = p;
//             p = p->next;
//         }
//         if (p == first)
//         {
//             t->next = p->next;
//             p = t;
//         }
//         else
//         {
//             t->next = p;
//             q->next = t;
//         }
//     }
// }
void InsersionSorted(struct Node *H, int x)
{
    struct Node *t, *q = NULL, *p = H;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (p == NULL)
        p = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

struct Node *  Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return p;

        else
            p = p->next;
    }
    return NULL;
}