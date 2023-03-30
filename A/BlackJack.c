#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char face;
    char type;
    // int value;
    struct Node *next;
} *first;
struct Node *second;

void create(char C[], char T[], int V[], int n)
{
}

int main()
{
    char F[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K', 'A'};
    char T[] = {'c', 'd', 'h', 's'};
    // int V[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 10, 10, 10 , 1/11};

    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last;

    first->face = '1';
    first->next = NULL;
    first->type = 'c';
    last = first;

    int i for (i = 1; i < 13; i++)
    {
        t->face = F[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

    return 0;
}

// char type clubs diamonds hearts spades;