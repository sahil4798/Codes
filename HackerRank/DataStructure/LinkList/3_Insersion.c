#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linklisttransversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsersionAtFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    (*ptr).data = data;
    ptr->next = head;

    return ptr;
}

struct Node *InsersionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;

    return head;
}
// struct Node *InsersionAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     struct Node *q=NULL;
//     int i = 0;
//     while (p!= NULL)
//     {   
//         q=p;
//         p = p->next;
//     }

//     q->next = ptr;
//     ptr->next = NULL;
//     ptr->data = data;

//     return head;
// }

struct Node *InsersionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    (*ptr).data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node *InsersionAfterNode(struct Node *head, int data, struct Node *q)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = q->next;
    q->next = ptr;

    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    linklisttransversal(head);

    // printf("******************front insersion*************************\n");
    // // struct Node *newhead = (struct Node*)malloc (sizeof(struct Node) ) ;
    // // newhead = InsersionAtFirst(head , 00);
    // // linklisttransversal(newhead);

    // head = InsersionAtFirst(head, 00);
    // linklisttransversal(head);

    printf("******************insersion at End*************************\n");
    head = InsersionAtEnd(head, 40);
    linklisttransversal(head);

    // printf("******************insersion at Index*************************\n");
    // head = InsersionAtIndex(head, 1000, 1);
    // linklisttransversal(head);

    // printf("*****************insersion after Node*************************\n");
    // struct Node* q=head;
    // // q=head;
    // int i=1 ;
    // int n;
    // printf("Enter the value of n(position in number of node after that you want to insert a node)\n");
    // scanf("%d", &n);
    // while(i < n)
    // {
    //     q=q->next;
    //     i++;
    // }
    // head = InsersionAfterNode(head , 9000 , q);
    // head = InsersionAfterNode(head , 9000 , second);
    // linklisttransversal(head);

    return 0;
}
